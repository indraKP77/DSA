#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> height;
    int n;
    cout<<"Enter no. of bars "<<endl;
    cin>>n;
    int n1;
    for(int i=0;i<n;i++){
        cin>>n1;
        height.push_back(n1);
    }
    int width,length,water;int maxWater = 0;
    int lb = 0;int rb = height.size()-1;
    while(lb<rb){
        width = rb-lb;
        length = min(height[lb],height[rb]);
        water = width*length;
        maxWater = max(maxWater,water);
        if(height[lb]<height[rb]){
            lb++;
        }
        else{
            rb--;
        }
    }
    cout<<"Max Water is : "<<endl;
    cout<<maxWater<<endl;
    return 0;
}