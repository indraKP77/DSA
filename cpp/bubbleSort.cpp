#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int n1;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>n1;
        arr.push_back(n1);
    }
    for(int i=0;i<n;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }
    cout<<"Array in sorted order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}