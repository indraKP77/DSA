#include<iostream>
#include<vector>
using namespace std;

bool isVaild(vector<int>& arr,int n,int m,int mid){
    int stu=1;int pages=0;int maxAllowedPages=mid;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        if(pages+arr[i]<maxAllowedPages){
            pages+=arr[i];
        }
        else{
            stu++;
            pages=arr[i];
        }
    }
    if(stu<=m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    vector<int> books = {2,1,3,4};int ans = -1;
    int end = 0;int n = 4;int m=2;
    if(m>n){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<4;i++){
        end = end+books[i];
    }
    int st = 0;int mid = 0;
    while(st<=end){
        mid = st+(end-st)/2;
        if(isVaild(books,4,2,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    cout<<ans-1<<endl;
    return 0;
}