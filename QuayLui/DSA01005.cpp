#include <bits/stdc++.h>
using namespace std;
int n,a[100];
int used[100];
void inkq(){
    for(int i = 1; i <= n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    for(int j = n; j >=1; j--){
        if(used[j]==0){
            a[i]=j;
            used[j]=1;
            if(i==n){
                inkq();
            }
            else Try(i+1);
            used[j]=0;
        }
    }
}
main(){
    int t; cin>>t;
    while(t--){
    cin>>n;
    Try(1);
    cout<<endl;
    }
}