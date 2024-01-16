#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, K;
        cin >> N >> K;

        unordered_map<long long, long long> frequency;

        int countPairs = 0;

        for (long i = 0; i < N; i++) {
            int num;
            cin >> num;

            // Tìm kiếm phần tử cần để tổng là K - num
            long long complement = K - num;

            // Nếu phần tử complement đã xuất hiện trước đó, thì cộng vào số cặp
            if (frequency.find(complement) != frequency.end()) {
                countPairs += frequency[complement];
            }

            // Tăng tần suất xuất hiện của phần tử hiện tại
            frequency[num]++;
        }

        cout << countPairs << endl;
    }

    return 0;
}
