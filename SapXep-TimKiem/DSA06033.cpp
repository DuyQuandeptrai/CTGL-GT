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
    int b[n];
    b[n-1]=a[n-1];
    for(int i = n - 2; i >= 0 ; i--){
        b[i] = max(b[i+1],a[i]);
    }
    int res = 0,j = 0 , i = 0;
    while(j < n && i < n){
        if(b[j] > a[i]){
            res = max(res, j - i);
            j++;
        }
        else i++;
    }
    if(res > 0 ){
        cout<<res<<endl;
    }
    else cout<<-1<<endl;
    }
}