#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getPerms(vector<int> &nums,vector<vector<int>> &ans,int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        getPerms(nums,ans,idx+1);
        swap(nums[i],nums[idx]);
    }
}

int main(){
    vector<vector<int>> ans;
    vector<int> nums = {1,2,3,4};
    getPerms(nums,ans,0);
    for(int i = 0;i<ans.size();i++){
        for(int j = 0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}