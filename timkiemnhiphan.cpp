#include<bits/stdc++.h>
using namespace std;
int binarySearch(int left,int right,int a[],int k){
    if(left<=right){
        int mid=left+(right-left)/2; 
        if(a[mid]==k){
            return mid+1;
        }
        else if(a[mid]<k){
            return binarySearch(mid+1,right,a,k);
        }
        else{
             return binarySearch(left,mid-1,a,k);
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(binarySearch(0,n-1,a,k)!=-1){
        cout<<binarySearch(0,n-1,a,k);
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}