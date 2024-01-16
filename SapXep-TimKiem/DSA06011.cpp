#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n;cin>>n;
    int a[n];
    vector<int> v;
    for(int i = 0 ; i < n;i++){
        cin>>a[i];
    }
    
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1; j < n; j++){
            v.push_back(a[i]+a[j]);
        }
    }
    long min = 1e9;
    int x = 0;
    for(int i = 0 ; i < v.size(); i++){
        if(abs(v[i]) < min ){
            min = abs(v[i]);
            x = i;
        }
    }
    cout<<v[x]<<endl;
    }
}