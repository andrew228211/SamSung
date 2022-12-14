#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
map<int,int>b;
void Sang(){
    for(int i=2;i*i<=1000000;i++){
        if(a[i]==0){
            for(int j=i*i;j<=1000000;j+=i){
                a[j]=i;
            }
        }
    }
    for(int i=0;i<=1000000;i++){
        if(a[i]==0){
            a[i]=i;
        }
    }
}
void Uoc(ll n){
   while(n>1){
    b[a[n]]++;
    n/=a[n];
   }
}
int main(){
    int t;
    cin>>t;
    Sang();
    while(t--){
        int m;
        cin>>m;
        b.clear();
        Uoc(m);
        Uoc(m+1);
        Uoc(m+2);
        int sum1=1,sum2=1;
        for(auto i:b){
            sum1*=i.second+1;
            sum2*=i.second*2+1;
        }
        cout<<sum2/2-sum1+1<<endl;
    }
}