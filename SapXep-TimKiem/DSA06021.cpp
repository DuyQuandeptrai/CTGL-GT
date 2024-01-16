#include<bits/stdc++.h>
using namespace std;

main(){
    int t ; cin>>t;
    while(t--){
   int n,k; cin>>n>>k;
    int temp = 0;
   
   for(int i = 0 ; i < n;i++){
        int x; cin>>x;
        if(x==k){
            temp = i;
        }
   }
   cout<<temp+1<<endl;
    }
}