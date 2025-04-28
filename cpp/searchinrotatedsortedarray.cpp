#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,target;
    cout<<"Enter size of rotated array:"<<endl;
    cin>>n;
    vector<int> arr(n,0);
    cout<<"Enter rotated array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target:"<<" ";
    cin>>target;
    int st = 0;int end = n-1;
    int mid=0;
    while(st<=end){
        mid = st+(end-st)/2;
        if(arr[mid]==target){
            cout<<"Target found at index: "<<mid<<endl;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st<=target] && target<=arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        if(arr[mid]<=arr[end]){
            if(arr[mid]<=target && target<=arr[end]){
                st = mid+1;
            }
            else{
                end =mid-1;
            }
        }
    }
    return -1;

}