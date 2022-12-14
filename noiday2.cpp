#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int main(){
    int t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+5];
        priority_queue<ll,vector<ll>,greater<ll> >pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
        }
        ll sum1=0,sum2=0;
        ll tong=0;
        while(pq.size()>1){
            sum1=pq.top();
            pq.pop();
            sum2=pq.top();
            pq.pop();
            ll sum=(sum1+sum2)%mod;
            tong=(tong+sum)%mod;
            pq.push(sum);
        }
        cout<<tong;
    }
}