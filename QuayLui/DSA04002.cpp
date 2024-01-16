#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

long long daonguoc(long long n){
    long long n1=0;
    while(n>0){
        long long x = n%10;
        n1 = n1*10+x;
        n=n/10;
    }
    return n1;
}

long long repoww(long long n, long long k){
    if(k==0){
        return 1;
    }
    long long x = repoww(n,k/2);
    if(k%2==0){
        return (x*x)%mod;
    }
    else{
        return (((x*x)%mod)*n)%mod;
    }
}

main(){
    int t; cin>>t;
    while(t--){
    long long n;
    cin>>n;
    long long n1 = daonguoc(n);
    cout<<repoww(n,n1)<<endl;
    }
}