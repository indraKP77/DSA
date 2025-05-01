#include<iostream>
using namespace std;

int main(){
    string s;string part;
    cout<<"Enter the string:";
    getline(cin,s);
    cout<<endl<<"Enter the part you want to erase:";
    getline(cin,part);
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    cout<<"String after deleting all occurences of "<<part<<" is "<<s;
    return 0;
}