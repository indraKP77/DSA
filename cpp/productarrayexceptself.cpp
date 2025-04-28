#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of numbers:"<<endl;
    cin>>n;
    vector<int> nums;
    int n1;
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>n1;
        nums.push_back(n1);
    }
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix = 1;
    for(int i=n-2;i>=0;i--){
        suffix = suffix*nums[i+1];
        ans[i] = ans[i]*suffix;
    }
    cout<<"Product of Array Except self is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}