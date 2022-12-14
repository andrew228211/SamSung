#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        deque<int>dq;
        for(int i=0;i<n;i++){
            while(dq.size()&&a[dq.back()]<=a[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i-dq.front()>=k){
               dq.pop_front();
            }
            if(i>=k-1){
                cout<<a[dq.front()]<<" ";
            }
        }
        cout<<endl;
    }
}