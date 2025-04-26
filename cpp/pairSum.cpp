#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,target;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter target"<<endl;
    cin>>target;
    vector<int> pair;
    int end=n-1;
    for(int start = 0;start<end;start++){
        int pairSum = a[start]+a[end];
        if(pairSum == target){
            pair.push_back(start);
            pair.push_back(end);
        }
        if(pairSum>target){
            end--;
        }
    }
    cout<<pair[0]<<","<<pair[1]<<endl;
    return 0;
}