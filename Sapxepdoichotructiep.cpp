#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
            cin>>a[i];
    }
    for(int i=0;i<n;i++){
       int flag=0;
       int Max=0;
       for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            flag=1;
            swap(a[i],a[j]);
        }
       }
       if(flag==0){
            break;
       }
       cout<<"Buoc "<<i+1<<": ";
       for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
       } 
       cout<<endl;
    }
}