#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i = 2;i*i < n; i++){
        if(n%i==0){
            return "Not Prime ";
        }
    }
    return "Prime";
}

int digits(int n){
    int count = 0;
    int quo;int rem;
    while(n!=0){
        rem = n%10;
        count++;
        n=n/10;
    }
    return count;
}

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b == 0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        gcd(a%b,b);
    }
    else{
        gcd(a,b%a);
    }
}

int main(){
    int n = 20;int n2 = 28;
    cout<<isPrime(n)<<endl;
    int count = digits(n);
    cout<<"No. of digits "<<count<<endl;
    int g = gcd(n,n2);
    cout<<"GCD is "<<g<<endl;
    int lcm = (n*n2)/g;
    cout<<"LCM is "<<lcm;
}