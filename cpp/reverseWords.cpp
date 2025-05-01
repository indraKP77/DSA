#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string to find the reverse words: ";
    getline(cin,s);
    reverse(s.begin(),s.end());
    string ans = "";
    for(int i=0;i<s.length();i++){
        string word = "";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans = ans + " " + word;
        }
    }
    string aa = ans.substr(1);
    cout<<"Final reversed word is: "<<aa<<endl;
    return 0;
}