#include <iostream>
#include <vector>

using namespace std;

// Hàm tìm điểm cân bằng đầu tiên của dãy A[]
int findEquilibrium(vector<int>& arr, int N) {
    int totalSum = 0;
    for (int i = 0; i < N; ++i) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < N; ++i) {
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            return i + 1; // Vị trí của điểm cân bằng (đếm từ 1)
        }

        leftSum += arr[i];
    }

    return -1; // Không tìm thấy điểm cân bằng
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int result = findEquilibrium(arr, N);

        cout << result << endl;
    }

    return 0;
}
