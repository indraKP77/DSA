#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> prices;
    int n;
    cout<<"Enter no. of days"<<endl;
    cin>>n;int n1;
    for(int i=0;i<n;i++){
        cin>>n1;
        prices.push_back(n1);
    }
    int minday;int minprice = prices[0];int maxProfit = 0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<minprice){
            minday=i;
            minprice = prices[i];
        }
        maxProfit = max(maxProfit,prices[i]-prices[minday]);
    }
    cout<<"Max Profit: "<<maxProfit<<endl;
    return 0;
}