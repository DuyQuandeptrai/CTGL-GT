#include<bits/stdc++.h>
using namespace std;

main(){
    int t;cin>>t;
    while(t--){
    int n; cin>>n;
    set<int> s;
    for(int i = 0 ; i< n;i++){
        int x; cin>>x;
        s.insert(x);
    }
    vector<int> v;
    for(auto x:s){
        v.push_back(x);
    }
    if(v.size()>1){
        cout<<v[0]<<" "<<v[1]<<endl;
    }
    else cout<<-1<<endl;
    
    }
}