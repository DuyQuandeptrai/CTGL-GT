#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void inkq(){
    for(int i = 1 ; i <= n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int i){
    for(int j = 0 ; j <= 1; j++){
        a[i]=j;
        if(i == n){
            bool  check = true;
            for(int k = 1; k<= n/2 ; k++){
                if(a[k] != a[n-k + 1]){
                    check = false;
                    break;
                }
            }
            if(check){
                inkq();
            }
        }
        else Try(i+1);
    }
}

main(){
    cin>>n;
    Try(1);
}