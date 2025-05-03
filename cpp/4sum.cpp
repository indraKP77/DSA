#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(){
    vector<int> nums = {2,2,2,2,2};int target = 8;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i = 0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){continue;}
        for(int j=i+1;j<n;){
            int st = j+1;int end = n-1;
            while(st<end){
                int sum = nums[i] + nums[j] + nums[st] + nums[end];
                if(sum<target){
                    st++;
                }
                else if(sum>target){
                    end--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[st],nums[end]});
                    st++;
                    end--;
                    while(st<end && nums[st]==nums[st-1]){
                        st++;
                    }
                }
            }
            j++;
            while(j<n && nums[j]==nums[j-1]){
                j++;
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> ans = fourSum();
    int m = ans.size();
    int n = ans[0].size();
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}