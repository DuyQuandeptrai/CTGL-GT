#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; i++){
        if(i<n/2){
            cout<<a[n-i-1]<<" "<<a[i]<<" ";
        }
        if(i==n-i-1) cout<<a[i]<<' ';
            
    }
    cout<<endl;
    }
}
