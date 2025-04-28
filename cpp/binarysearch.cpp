#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int> arr;
    int n1;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>n1;
        arr.push_back(n1);
    }
    int target;
    cout<<"Enter target:"<<endl;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    int st = 0;
    int end = n-1;
    int mid=(st+end)/2;
    while(st<=end){
        if(arr[mid]==target) {cout<<"Found at index: "<<mid<<endl;break;}
        if(target>arr[mid]){
            st = mid+1;
            mid = st+(end-st)/2;
        }
        if(target<arr[mid]){
            end = mid-1;
            mid = st+(end-st)/2;
        }
    }
    return 0;
}