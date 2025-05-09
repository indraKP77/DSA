#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr = {-2,1,3,8,6};
    stack<int> s;
    vector<int> ans;
    for(int i = 0;i<arr.size();i++){
        while(s.size()>0 && s.top() >= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    cout<<"Previous Smaller Element array"<<endl;
    for(int val:ans){
        cout<<val<<endl;
    }
    return 0;
}