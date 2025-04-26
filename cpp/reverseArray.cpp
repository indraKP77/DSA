#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }int j=n-1;
    for(int i=0;i<n/2;i++){
        swap(a[i],a[j]);
        j--;
    }
    cout<<"Array after swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}