#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    int c[n];
    for(int i = 0 ; i < n ; i ++ ){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int j = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            c[j] = i+1;
            j++;
        }
    }
    cout<<c[0]<<" "<<c[j-1]<<endl;
    }
}