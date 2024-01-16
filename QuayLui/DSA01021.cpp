#include<bits/stdc++.h>
using namespace std;

main(){

    int n,k;cin>>n>>k;
    int a[k+1];
    
    for(int i = 1; i <= k ; i++){
        cin>>a[i];
    }
    int dem = 0;
    for(int i = k; i>=1; i--){
        if(a[i]== n-k+i){
            dem++;
        }
    }
    cout<<dem<<endl;
}