//2. Write Program to find the array type
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"enter the number for array size"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        if(a[i]%2==1){
            odd++;
        }
    }
    if(even==n)
    cout<<"even"<<endl;
    else if(odd==n)
    cout<<"odd"<<endl;
    else
    cout<<"mix element"<<endl;
    return 0;
}