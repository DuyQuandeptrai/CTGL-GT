#include<bits/stdc++.h>
using namespace std;
string ts="+-*/";
bool check(char c){
    for(int i = 0  ; i < ts.size(); i++){
        if(ts[i]==c){
            return 1;
        }
    }
    return 0;
}

main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
    string s,k;
    cin>>s;
    stack<string> st;
    for(int i = s.size() -1 ; i >= 0 ; i--){
        if(check(s[i])){
            k = '(' + st.top();
            st.pop();
            k += s[i];
            k = k + st.top() +')';
            st.pop();
            st.push(k);
        }
        else st.push(string(1,s[i]));
    }
    cout<<st.top()<<endl;
    }
}