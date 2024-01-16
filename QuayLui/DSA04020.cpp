#include<bits/stdc++.h>
using namespace std;




main(){
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        v.push_back(x);
    }

    bool found = binary_search(v.begin(),v.end(),k);

    if(found){
        int pos = lower_bound(v.begin(),v.end(),k)-v.begin()+1;
        cout<<pos;
    }
    else cout<<"NO";
    cout<<endl;
    }
}