#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[16];
int check[16];
int x[16];
void Try(int i,int tmp){
    for(int j=0;j<n;j++){
        if(check[j]==0 && tmp<=a[j]){
            check[j]=1;
            x[i]=a[j];
            tmp=x[i];
            if(i==k-1){
                for(int m=0;m<k;m++){
                  cout<<x[m]<<" ";
                }
                cout<<endl;
            }
            Try(i+1,tmp);
            check[j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        memset(check,0,sizeof(check));
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        Try(0,0);
    }
}