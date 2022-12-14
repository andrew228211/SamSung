#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        float a[n+5];
        float sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sum-=a[0];
        float Min[n+5];
        Min[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            Min[i]=min(Min[i+1],a[i]);
        }
        float Max=sum/(n-1);
        int k=0;
        set<int>x;
        for(int i=1;i<=n-2;i++){
            sum-=Min[i];
            if(Max<sum/(n-i-1)){
                Max=sum/(n-i-1);
                k=i;
                x.clear();
                x.insert(i);
            }
            else if(Max==sum/(n-i-1)){
                x.insert(i);
            }
            sum+=Min[i];
            sum-=a[i];
        }
        for(auto y:x){
            cout<<y<<" ";
        }
    }
}