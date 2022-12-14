#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int cnt=0;
	for(int i=0;i<n-1;i++)
	{
		int tmp=i,ok=a[i];
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<ok)
			{
				tmp=j;
				ok=a[j];
			}
		}
		swap(a[i],a[tmp]);
        cout<<"Buoc "<<i+1<<": ";
		for(int k=0;k<n;k++)
		{
			cout<<a[k]<<" ";
		}
        cout<<endl;
		cnt++;
	}
}