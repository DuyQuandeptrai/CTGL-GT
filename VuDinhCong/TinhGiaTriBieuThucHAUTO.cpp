#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    string s; cin>>s;
    stack<long long> st;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'  ){
            long long a = st.top(); st.pop();
            long long b = st.top(); st.pop();
            long long tmp = 0;
            if(s[i] == '+'){
                tmp = a+b;
            }
            if(s[i] == '-'){
                tmp = b-a;
            }
            
            if(s[i] == '*'){
                tmp = a*b;
            }
            if(s[i] == '/'){
                tmp = b/a;
            }
            if(s[i] == '^'){
                tmp = pow(a,b);
            }
            st.push(tmp);
        }
        else st.push((long long)(s[i]-'0'));
    }
    cout<<st.top()<<endl;
    }
}