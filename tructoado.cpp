#include<bits/stdc++.h>
using namespace std;
struct Toado{
    int x;
    int y;
};
bool kt(Toado N,Toado M){
   return N.y<M.y;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Toado v[n+5];
        for(int i=0;i<n;i++){
            cin>>v[i].x>>v[i].y;
        }
        int cnt=1;
		int dem=0;
        sort(v,v+n,kt);
    for(int i=1;i<n;i++)
		{
			if(v[i].x>=v[dem].y)
			{
				cnt++;
				dem=i;
			}
		}
		cout<<cnt<<endl;
    }
}