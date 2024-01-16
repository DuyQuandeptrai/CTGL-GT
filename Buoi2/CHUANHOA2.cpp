#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); 
    while (t--)
    {
        std::string s;
        std::getline(std::cin, s);
        int n = s.length();
        std::vector<bool> k(n, false);
        int d;

        for (int i = 0; i < n; i++)
        {
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i] += 32;
            if (s[i] != ' ' || (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0'))
                k[i] = true;
            if ((i == 0 || s[i-1] == ' ') && s[i] != ' ')
                s[i] -= 32;
        }

        for (int i = 0; i < n; i++)
            if (s[i] == ' ' && k[i])
            {
                d = i;
                break;
            }

        for (int i = d+1; i < n; i++)
            if (k[i])
                std::cout << s[i];
        std::cout << ", ";
        for (int i = 0; i < d; i++)
            if (k[i])
            {
                if ('a' <= s[i] && s[i] <= 'z')
                    s[i] -= 32;
                std::cout << s[i];
            }
        std::cout << "\n";
    }
    return 0;
}

