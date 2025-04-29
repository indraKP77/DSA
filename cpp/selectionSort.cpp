#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int n1;
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>n1;
        arr.push_back(n1);
    }
    for(int i=0;i<n-1;i++){
        int smallestIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
    cout<<"Array after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}