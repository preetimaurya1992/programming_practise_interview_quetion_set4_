//9. Write Program to find sum of elements in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the array element size"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
         sum=sum+a[i];
    }
    cout<<"sum of array :"<<sum<<endl;
    return 0;
}