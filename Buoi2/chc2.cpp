#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        if ((static_cast<int>(sqrt(n)) % 2 == 0) && 
            static_cast<int>(sqrt(n)) == sqrt(n)) 
            d = 1;
        else 
            d = 0;
        for (int i = 1; i < sqrt(n); ++i)
            if (n % i == 0)
            {
                if (i % 2 == 0) ++d;
                if ((n / i) % 2 == 0) ++d;
            }
        cout << d << "\n";
    }

    return 0;
}

