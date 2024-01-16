#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100], b[100];
vector<vector<int>> v;

void inkq() {
    vector<int> tmp;
    for (int i = 1; i <= n; i++) {
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
}

int getPermutationOrder() {
    int order = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == vector<int>(b + 1, b + n + 1)) {
            return order;
        }
        order++;
    }
    return -1; // Not found
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (used[j] == 0) {
            a[i] = j;
            used[j] = 1;
            if (i == n) {
                inkq();
            } else {
                Try(i + 1);
            }
            used[j] = 0;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        Try(1);
        int order = getPermutationOrder();
        cout << order << endl;
        v.clear(); // Clear vector for the next test case
    }

    return 0;
}
