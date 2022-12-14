 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int t=1;
     //cin>>t;
     while(t--){
         string s;
         int k;
         cin>>s>>k;
         stack<int>st;
         st.push(s[0]-'0');
         vector<int>ans;
         for(int i=1;i<s.size();i++){
             int n=s[i]-'0';
             while(!st.empty()&&st.top()<n&&k>0){
                 st.pop();
                 k--;
             }
             st.push(n);
         }
         while(k>0&&!st.empty()){
             st.pop();
             k--;
         }
         while(!st.empty()){
             int n=st.top();
             st.pop();
             ans.push_back(n);
         }
         for(int i=ans.size()-1;i>=0;i--){
             cout<<ans[i];
         }
     }
 }
