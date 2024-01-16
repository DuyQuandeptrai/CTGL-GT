#include <iostream>
using namespace std;

int n, k, a[100];

void inkq() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i, int countOnes) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        countOnes += a[i];

        if (i == n && countOnes == k) {
            inkq();
        } else  {
            Try(i + 1, countOnes);
        }

        countOnes -= a[i]; // Phục hồi trạng thái để thử giá trị khác của a[i]
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1, 0);
    }

    return 0;
}
