#include<iostream>
using namespace std;

bool isFreqSame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;int count = 1;
    cout<<"Enter main string(all lower case):";
    getline(cin,s1);
    cout<<"Enter substring to check permutations(all lower case):";
    getline(cin,s2);
    int freq[26] = {0};
    for(int i=0;i<s2.length();i++){
        int idx = s2[i]-'a';
        freq[idx]++;
    }
    int windSize = s2.length();
    for(int i=0;i<s1.length();i++){
        int windIdx = 0;int idx = i;
        int windFreq[26] = {0};
        while(windIdx<windSize && idx<s1.length()){
            int idx1 = s1[i]-'a';
            windFreq[idx1]++;
            windIdx++;
            idx++;
        }
        if(isFreqSame(freq,windFreq)){
            count+=1;
            break;
        }
        }
        if(count ==1){
            cout<<"Permutation found!"<<endl;
        }
        else{
            cout<<"Permutation not found!"<<endl;
        }
        return 0;
}