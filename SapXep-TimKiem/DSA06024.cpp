#include<bits/stdc++.h>
using namespace std;

main(){
    int  n; cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++){
		cin>>a[i];
	}
    int pos;
    for(int i = 0 ; i < n - 1; i ++){
        pos = i;
        for(int j = i+1; j < n ; j++){
            if(a[j] < a[pos]){
                pos = j;
            }
        }
        swap(a[i],a[pos]);
       cout << "Buoc " << i + 1 << ": ";
       for (int j = 0; j < n; j++)
			cout << a[j] << " ";
		cout << endl;
    }
}