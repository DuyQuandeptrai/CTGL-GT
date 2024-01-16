#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string s;
  getline(cin, s);
  
  
  
  int x = s[0] - '0';
  int y = s[4] - '0';
  int z = s[8] - '0';
  
  
  if (x + y == z) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
  return 0;
}

