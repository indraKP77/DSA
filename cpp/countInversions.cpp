#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;int i = st;int j = mid+1;int invCount=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            invCount+=mid-i+1;
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx = 0;idx<temp.size();idx++){
        arr[idx+st] = temp[idx];
    }
    return invCount;
}

int mergeSort(vector<int> &arr,int st,int end){
    if(st<end){
        int mid = st+ (end-st)/2;
        int leftInvCount = mergeSort(arr,st,mid);
        int rightInvCount = mergeSort(arr,mid+1,end);
        int invCount = merge(arr,st,mid,end);
        return leftInvCount+rightInvCount+invCount;
    }
    return 0;
}

int main(){
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int n = arr.size();
    int count = mergeSort(arr,0,n-1);
    cout<<"Inversion count is: "<<count;
    return 0;
}