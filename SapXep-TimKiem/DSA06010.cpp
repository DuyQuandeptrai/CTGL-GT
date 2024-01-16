#include<bits/stdc++.h>
using namespace std;



main(){
    int t; cin>>t;
    while(t--){

    int n;cin>>n;
    int a[n];
    set<int> s;
    for(int i = 0 ; i < n;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n;i++){
        while (a[i]> 0)
        {
            int x = a[i]%10;
            a[i] = a[i]/10;
            s.insert(x);
        }
        
    }
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    }
}