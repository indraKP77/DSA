#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector <int>> matrix,int key,int row){
    int n = matrix[0].size();
    int st = 0;int end = n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(matrix[row][mid] == key){
            return true;
        }
        else if(matrix[row][mid] > key){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return false;
}

bool searchMatrix(){
    vector<vector <int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int m = matrix.size();int n = matrix[0].size();
    int stRow = 0;int endRow = m-1;
    int target = 13;
    while(stRow<=endRow){
        int midRow = stRow + (endRow - stRow)/2;
        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            return searchInRow(matrix,target,midRow);
        }
        else if(target > matrix[midRow][n-1]){
            stRow = midRow + 1;
        } 
        else{
            endRow = midRow - 1;
        }
    }
    return false;
}

int main(){
    bool c = searchMatrix();
    if(c == true){
        cout<<"Element found in matrix"<<endl;
    }
    else{
        cout<<"Element not found in Matrix"<<endl;
    }
    return 0;
}