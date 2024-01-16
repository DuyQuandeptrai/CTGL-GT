#include <bits/stdc++.h>
using namespace std;

int n, a[100], k;
vector<vector<int>> v;
void inkq() {
	vector<int> tmp;
    for (int i = 1; i <= n; i++) {
        tmp.push_back(a[i]);
    }
	v.push_back(tmp);
}

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
           
                inkq();
        } else {
            Try(i + 1 );
        }
    }
}

int main() {
    cin >> n>>k;
    Try(1);
    for(int i = 0 ; i < v.size(); i=i+k){
		for(int j = 0 ; j < v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}
