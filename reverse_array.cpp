//16.Write Program for Reversing an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"reverse array :"<<endl;
    for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
    }
    return 0;
}