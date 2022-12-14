#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
int mod=1e9+7;
/*
7P3 i=7 j=3
=7 6 5
=6 5 4 + 6 5 3
=6P3+6P2*3
=dp[i-1][j]+dp[i-1][j-1]*j
*/
void qhd(){
    for(int i=0;i<1001; i++) dp[i][0]=1;
    for(int i=1;i<1001;i++){
        for(int j=1;j<1001;j++){
            dp[i][j]=(dp[i-1][j]+dp[i-1][j-1]*j)%mod;
        }
    } 
}
int main(){
    int t;
    cin>>t;
    qhd();
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
}