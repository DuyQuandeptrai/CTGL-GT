#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == s[s.length()-1])
            cout << "YES";
        else cout << "NO";   
        cout << "\n";  
    }
 
    return 0;
}

