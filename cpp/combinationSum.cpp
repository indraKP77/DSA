#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>> s;

void combSum(vector<int>& arr,vector<vector<int>> &ans,vector<int> &combin,int idx,int tar){

    if(idx == arr.size() || tar < 0){
        return;
    }
    if(tar == 0){
        if(s.find(combin) == s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }

    combin.push_back(arr[idx]);
    combSum(arr,ans,combin,idx+1,tar-arr[idx]);
    combSum(arr,ans,combin,idx,tar-arr[idx]);
    combin.pop_back();
    combSum(arr,ans,combin,idx+1,tar);
}

int main(){
    vector<int> arr = {2,3,5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int> combin;
    combSum(arr,ans,combin,0,target);
    for(int i = 0;i<ans.size();i++){
        for(int val:ans[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}