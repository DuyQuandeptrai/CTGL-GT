#include<bits/stdc++.h>
using namespace std;



main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    vector<int> a(n),b(n);
    stack<string> st;
    string tmp = "";
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        tmp += "[" + to_string(a[0]);
        for(int j = 1; j < n - i ; j++){
            tmp += " "+ to_string(a[j]);
            b[j-1] = a[j-1]+a[j];
        }
        tmp += "]";
        st.push(tmp);
        tmp = "";
        for(int j = 0 ; j < n- i ; j++){
            a[j] = b[j];
        }
    }
    while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    }
}