#include<bits/stdc++.h>
using namespace std;

main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
    string s; 
    getline(cin,s);
    stringstream ss(s);
    vector<string> word;
    string tmp ="";
    while(ss>>tmp){
        word.push_back(tmp);
    }
    for(int i = word.size() -1 ; i >= 0 ; i--){
        cout<<word[i]<<" ";
    }
    cout<<endl;
    }
}