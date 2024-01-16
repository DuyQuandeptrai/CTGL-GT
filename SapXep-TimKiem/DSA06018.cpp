#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i = 0; i< n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    sort(a,a+n);
    int l = a[0];
    int r = a[n-1];
    int k = r-l+1;
    cout<<k- s.size()<<endl;
    }
}