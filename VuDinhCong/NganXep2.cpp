#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    stack<int> st;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int n; cin>>n;
            st.push(n);
        }
        else if(s=="POP" && st.size()>0){
            st.pop();
        }
        else if(s=="PRINT"){
            if(st.size()> 0) cout<<st.top()<<endl;
            else cout<<"NONE"<<endl;
        } 

    }
}