#include<iostream>
using namespace std;

int check(){
    string str;
    cout<<"Enter string to find out if it is a palindrome"<<endl;
    getline(cin,str);
    int st = 0;
    int end = str.size() - 1;
    while(st<=end){
        if(!isalnum(str[st])){
            st++;
            continue;
        }
        if(!isalnum(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }
        else{
            st++;
            end--;
        }
    }
    return true;
}

int main(){
    bool c = check();
    if(c){
        cout<<" Valid Palindrome"<<endl;
    }
    else{
        cout<<"Not a valid palindrome"<<endl;
    }
    return 0;
}