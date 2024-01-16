#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    if (equal(a.begin(), a.begin() + n/2, a.rbegin()))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  
  return 0;
}

