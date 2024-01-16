#include<bits/stdc++.h>
using namespace std;

int n , k , a[100];
vector<string> s; 

void inkq(){
    for(int i = 1; i <=k ; i++){
        cout<<s[a[i]-1]<<" ";
    }
    cout<<endl;
}

void Try(int i){
    for(int j = a[i-1]+1; j <= n-k+i; j++){
        a[i]= j;
        if(i==k){
            inkq();
        }
        else{
            Try(i+1);
        }
    }
}

main(){
    cin>>n>>k;
    while(n--){
        string tm; cin>>tm;
        s.push_back(tm);
    }
    sort(s.begin(),s.end());
    for(int i = 0 ; i < s.size()-1;i++){
        if(s[i]==s[i+1]){
            s.erase(s.begin()+i);
            i--;
        }
    }
    n = s.size();
    a[0] = 0;
    Try(1);
}