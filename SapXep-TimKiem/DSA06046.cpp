#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int> v;
    for(int i = 0 ; i < n-1 ; i++){
        v.push_back(a[i+1]-a[i]);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    }
}