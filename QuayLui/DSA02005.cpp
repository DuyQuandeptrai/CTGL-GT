#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100];
string s;
void inkq(){
    for(int i = 0 ; i < s.size() ; i++){
        cout<<s[a[i]];
    }
    cout<<" ";
}
void Try(int i){
    for(int j = 0; j < s.size() ; j++){
        if(used[j]==0){
            a[i]= j;
            used[j]= 1;
            if(i==s.size()-1){
                inkq();
            }
            else Try(i+1);
            used[j] = 0;
        }
    }
}
main(){
    int t; cin>>t;
    while(t--){
    cin>>s;
    Try(0);
    cout<<endl;
    }
}