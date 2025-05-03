#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int st = i+1;int end = n-1;
        while(st<end){
            int sum = nums[i]+nums[st]+nums[end];
            if(sum>0){
                end--;
            }
            else if(sum<0){
                st++;
            }
            else{
                ans.push_back({nums[i],nums[st],nums[end]});
                st++;
                end--;
                while(st<end && nums[st] == nums[st-1]){
                    st++;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> ans = threeSum();
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}