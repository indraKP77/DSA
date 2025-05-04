#include<iostream>
#include<vector>
using namespace std;

void printSubSets(vector<int> &arr,vector<int> &ans,int i){
    if(i == arr.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printSubSets(arr,ans,i+1);

    ans.pop_back();
    printSubSets(arr,ans,i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;
    printSubSets(arr,ans,0);
    return 0;
}