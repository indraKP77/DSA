#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    int n1;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>n1;
        arr.push_back(n1);
    }
    int low = 0;int mid = 0;int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}