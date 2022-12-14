#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s1,s2;
    string a,b;
    getline(cin,a);
    getline(cin,b);
    stringstream ss(a);
    string s;
    set<string>s3;
    while(ss>>s){
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65&&s[i]<97){
                s[i]+=32;
                tmp+=s[i];
            }
            else{
                tmp+=s[i];
            }
        }
        s1.insert(tmp);
    }
    stringstream ss2(b);
    while(ss2>>s){
        string tmp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65&&s[i]<97){
                s[i]+=32;
                tmp+=s[i];
            }
            else{
                tmp+=s[i];
            }
        }
        if(s1.count(tmp)==1&&s3.count(tmp)==0){
            s2.insert(tmp);
        }
        else{
            s3.insert(tmp);
        }
        s1.insert(tmp);
    }
    for(auto x:s1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:s2){
        cout<<x<<" ";
    }
}