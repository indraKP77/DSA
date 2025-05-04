#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subSets(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &allSubSets){
    if(i == nums.size()){
        allSubSets.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    subSets(nums,ans,i+1,allSubSets);

    ans.pop_back();
    int idx = i+1;
    while(idx<nums.size() && nums[idx] == nums[idx-1]){
        idx++;
    }
    subSets(nums,ans,idx,allSubSets);
}

int main(){
    vector<int> nums = {1,2,2,3,3,4};
    sort(nums.begin(),nums.end());
    vector<int> ans;
    vector<vector<int>> allSubSets;
    subSets(nums,ans,0,allSubSets);
    for(int i = 0;i<allSubSets.size();i++){
        for(int val: allSubSets[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}