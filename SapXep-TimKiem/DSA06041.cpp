#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second>b.second;
}

main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    map<int,int> m;
    vector<pair<int,int>> vp;
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    for(int i = 0 ; i< n ;i++){
        vp.push_back(make_pair(a[i],m[a[i]]));
    }
    sort(vp.begin(),vp.end(),cmp);
    if(vp[0].second > n/2){
        cout<<vp[0].first<<endl;
    }
    else cout<<"NO"<<endl;
    }
}