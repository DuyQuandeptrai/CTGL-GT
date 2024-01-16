#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int ok = 0;
    for(int i = s.length() -1  ; i>=0; i--){
        if(s[i]=='1'){
            ok = 1;
            s[i]='0';
            for(int j = i + 1; j <= s.length(); j++){
                s[j]= '1';
            }
            break;
        }
    }
    if(ok==0){
        for(int i = 0; i < s.length(); i++){
            s[i]='1';
        }
    }
    for(int i = 0 ; i < s.length(); i++){
        cout<<s[i];
    }
}

main(){
    int t; cin>>t;
    while(t--){

    string s; 
    cin>>s;
    check(s);
    cout<<endl;
    }
}