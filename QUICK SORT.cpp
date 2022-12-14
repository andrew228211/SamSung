#include<bits/stdc++.h>
using namespace std;
int Search(int a[],int left,int right){
    int x=a[left];
    int i=left+1;
    int j=right;
    while(i<=j){
        while(a[i]<=x){
            i++;
        }
        while(a[j]>x){
            j--;
        }
        if(i<j){
            int u=a[i];
            a[i]=a[j];
            a[j]=u;
            i++;
            j--;
        }
    }
    int u=a[left];
    a[left]=a[j];
    a[j]=u;
    return j;
}
void quickSort(int a[],int left,int right){
    int k;
    if(left<right){
        k=Search(a,left,right);
        quickSort(a,left,k-1);
        quickSort(a,k+1,right);
    }
}
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
        quickSort(a,0,n-1);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}