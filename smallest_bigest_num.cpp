//8. Write Program to find smallest and largest element in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];   
 }
    int min=a[0],max=a[0];
 

  for(int i=1;i<n;i++){
    if(a[i]<min){
         min=a[i];
     } 
      if(a[i]>max){
         max=a[i];
     }
 }
         cout<<"min:"<<min<<endl;
         cout<<"max:"<<max<<endl;
    return 0;
}
