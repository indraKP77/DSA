#include<iostream>
using namespace std;

int main(){
    int pow=1;int rem=0;int binary = 0;
    int num = 50;
    for(int i=0;num>0;i++){
        rem = num%2;
        num=num/2;
        binary =binary + rem*pow;
        pow=pow*10;
    }
    cout<<"\n"<<binary<<endl;
    return 0;
}