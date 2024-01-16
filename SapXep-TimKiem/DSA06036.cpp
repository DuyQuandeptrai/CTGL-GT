#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k){
    sort(a,a+n);
    for(int i = 0 ; i < n -2 ; i++){
        int left = i+1, right = n-1;

        while(left<right){
            long sum = a[i] + a[left]+ a[right];
            if(sum == k){
                return true;
            }
            else if(sum < k){
                left++;
            }
            else right--;
        }
    }
    return false;
}

main(){
    int t; cin>>t;
    while(t--){
    int n;
    int k;
    cin>>n>>k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    if(check(a,n,k)){
        cout<<"YES"<<endl;
    } else cout<<"NO"<<endl;
    }
}