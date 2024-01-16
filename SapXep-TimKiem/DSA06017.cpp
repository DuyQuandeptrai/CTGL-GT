#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    long a[n], b[k];
    vector<long> v;
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    for(int i = 0 ; i < k ;i++){
        cin>>b[i];
        v.push_back(b[i]);
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    }
}