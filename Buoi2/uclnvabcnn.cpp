#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long ucln(long long a, long long b) {
  while (a*b != 0) {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a + b;
}

long long bcnn(long long a, long long b) {
  return a * b / ucln(a, b);
}

int main()
{
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << bcnn(a, b) << endl;
  }
  
  return 0;
}
