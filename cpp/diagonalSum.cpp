#include<iostream>
using namespace std;

int main(){
    int mat[][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int sum = 0;
    for(int i=0;i<4;i++){
        sum+= mat[i][i] + mat[i][4-i-1];
    }

    cout<<"Diagonal sum is: "<<sum;
}