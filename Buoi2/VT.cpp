#include <iostream>
#include <vector>
#include <string>

int search(std::string c, char s, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (c[i] == s) return i;
    }
    return -1;
}

int main() {
    std::string c;
    std::getline(std::cin, c);
    int res = 0;
    std::vector<int> a(100, 0);

    for (int i = 0; i < 52; i++) {
        if (a[c[i]] == 0) {
            a[c[i]]++;
            int ind1 = i;
            int ind2 = search(c, c[i], i+1, 51);
            std::vector<int> check(100, 0);

            for (int j = ind1 + 1; j < ind2; j++) {
                if (check[c[j]] == 0) {
                    check[c[j]]++;
                    if(search(c, c[j], j + 1, ind2 - 1) == -1) res++;
                }
            }
        }
    }

    std::cout << res / 2;
    return 0;
}

