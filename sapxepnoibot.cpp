#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int h=0;
    int tmp=1;
    for(int i=0;i<n-1;i++)
	{
        int flag=0,tmp=0;
		for(int j=1;j<n;j++)
		{
			if(a[flag]>a[j]){
                swap(a[flag],a[j]);
                tmp=1;
            }
            flag=j;
		}
        if(tmp==1){
        cout<<"Buoc "<<i+1<<": ";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
        cout<<endl;
        }
	}
}