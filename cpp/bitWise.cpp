#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    b = a^b^(a=b);
    cout<<a<<b;
    return 0;
}