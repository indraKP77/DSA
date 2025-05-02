#include<iostream>
#include<vector>
using namespace std;
//elena mikhailova
 bool searchMatrix(){
    vector<vector <int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int m = matrix.size();int n = matrix[0].size();int key = 31;
    int r = 0;int c=n-1;
    while(r<=m && c>=0){
        if(matrix[r][c] == key){
            return true;
        }
        else if(matrix[r][c] > key){
            c--;
        }
        else{
            r++;
        }
    }
    return false;
 }

 int main(){
    bool c = searchMatrix();
    if(c == true){
        cout<<"Element found!"<<endl;
        return 0;
    }
    else{
        cout<<"Element not found."<<endl;
    }
    return 0;
 }