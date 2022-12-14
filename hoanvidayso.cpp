#include<bits/stdc++.h>
using namespace std;
int n;
int a[10];
int check[10];
int b[10];
void xuat(){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=0;j<n;j++){
        if(check[j]==0){
            check[j]=1;
            b[i]=a[j];
            if(i==n-1){
                xuat();
            }
            Try(i+1);
            check[j]=0;
        }
    }
}
int main(){
    cin>>n;
    memset(check,0,sizeof(check));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    Try(0);
}