#include<bits/stdc++.h>
using namespace std;

int n,k;
vector<int> a,b;
vector<vector<int>> res;



void inkq(){
    int sum = 0;
    for(int i = 0; i < n ; i++){
        if(a[i]==1){
            sum = sum + b[i];
        }
    }
    if(sum==k){
        res.push_back(a);
    }
   
}




void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i==n-1){
            inkq();
        }
        else Try(i+1);
    }
}

main(){
    cin>>n>>k;
    a.resize(n,0);
    b.resize(n,0);
    for(int i =0; i < n; i++){
        cin>>b[i];
    }
    Try(0);
    for(int i = 0 ; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            if(res[i][j]==1){
                cout<<b[j]<<" ";  
            }            
        }
        cout<<endl;
    }
    cout<<res.size();
}