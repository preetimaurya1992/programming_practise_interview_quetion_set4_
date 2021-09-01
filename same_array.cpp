//1. Write Program to check if two arrays are the same or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x=0;
    cout<<"enter the array size"<<endl;
    cin>>n>>m;
    int a[n],b[m];
     cout<<"enter the first array"<<endl;
     for(int i=0;i<n;i++){
        cin>>a[i];
    }

     cout<<"enter the second array"<<endl;
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
       for(int i=0,j=0;i<n;i++,j++){
        if(a[i]==b[j]){
            x++;
        }
    }
   

    if(x==n&&x==m){
        cout<<"same array"<<endl;
    }
    else
    cout<<"not same"<<endl;
    return 0;
}