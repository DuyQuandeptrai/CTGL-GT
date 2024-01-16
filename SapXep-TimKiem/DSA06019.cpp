#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second > b.second)
		return 1;
	if (a.second == b.second && a.first < b.first)
		return 1;
	return 0;
}
main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    map<int,int> ts;
    vector<pair<int,int>> vp;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        ts[a[i]]++;
    }
    for(int i = 0 ; i < n;i++){
        vp.push_back(make_pair(a[i],ts[a[i]]));
    }
    
    sort(vp.begin(),vp.end(),cmp);
    for(int i = 0 ; i < vp.size();i++){
        cout<<vp[i].first<<" ";
    }
    cout<<endl;
    }
}
