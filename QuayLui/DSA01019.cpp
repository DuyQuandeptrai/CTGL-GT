#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void inkq(){
        for(int i = 1; i <= n ; i++){    
                if(a[i]==0) cout<<'A';
                if(a[i]==1) cout<<'H';           
        }
    
    cout<<endl;
}
bool check(){
    for(int i = 1; i< n;i++){
        if(a[i] ==1 && a[i+1]==1){
            return false;
        }
    }
    return true;
}
void Try(int i){
    for(int j = 0; j<= 1; j++){
        a[i]=j;
        if(i==n){
            if(a[1] == 1 && a[n]== 0 && check()){
                inkq();
            }
           
        }
        else Try(i+1);
    }
}


main(){
    int t; cin>>t;
    while(t--){
    cin>>n;
    Try(1);
    }
}