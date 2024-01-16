#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i = 0 ; i < n ;i++){
        cin>>a[i];
    }
    int count =0;
    for(int i = 0 ; i < n ; i++){
        if(a[i]==k){
            count++;
        }
    }
    if(count==0){
        cout<<-1<<endl;
    }
    else cout<<count<<endl;
    }
}