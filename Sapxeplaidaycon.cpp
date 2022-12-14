#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int tmp1=0,tmp2=0;
        int flag1=0,flag2=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                tmp1=i;
                break;
            }
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]<a[i-1]){
                tmp2=i;
                break;
            }
        }
        int Max=0,Min=1e9;
        for(int i=tmp1;i<=tmp2;i++){
            Max=max(a[i],Max);
            Min=min(a[i],Min);
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]<=Max){
                Max=i;
                break;
            }
        }
        
        for(int i=0;i<=tmp1;i++){
            if(a[i]>Min){
                Min=i;
                break;
            }
        }
        cout<<Min+1<<" "<<Max+1<<endl;
    }
}