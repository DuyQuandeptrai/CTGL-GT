#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  int t;
    cin >> t;
    for (int test = 1; test <= t; test++){
        int n, kt = 0;
        cin >> n;
        cout << "test " << test << ":";
        for( int i = 2; i <= n; i++ ){
            int d = 0;
            while( n % i == 0 ){
                ++d;
                n = n/i;
                if (n%i != 0)
                    if(kt) cout << " " << i << "(" << d << ")";
                    else
                    {
                        cout << " " << i << "(" << d << ")";
                        kt = 1;
                    }
            }
            if (n == 1) break;
        }
        cout << endl;
    }

  return 0;
}
