#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    auto it = find(v.begin(),v.end(),k);

    if(it!= v.end()){
        cout<<1<<endl;
    }
    else cout<<-1<<endl;
    }
}