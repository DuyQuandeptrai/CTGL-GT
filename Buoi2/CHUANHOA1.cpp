#include <iostream>
#include <string>
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
        std::string result = "";

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if ('A' <= c && c <= 'Z')
                c += 32;
            if (c != ' ' || (c == ' ' && s[i+1] != ' ' && s[i+1] != '\0'))
                result.push_back(c);
            if ((i == 0 || s[i-1] == ' ') && c != ' ')
                result[result.size()-1] -= 32;
        }
        
        std::cout << result << "\n";
    }
    return 0;
}

