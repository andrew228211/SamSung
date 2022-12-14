#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int f[n+5];
        int res=1;
        for(int i=1;i<=n;i++){
            f[i]=0;
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    f[i]=max(f[i],f[j]+1);
                }
            }
            res=max(res,f[i]);
        }
        cout<<res;
    }
}