#include<bits/stdc++.h>
using namespace std;

bool isIncreasingOrDecreasing(string num)
{
    bool increase = true;
    bool decrease = true;
 
    for (int i = 1; i < num.size(); i++)
    {
        if (num[i-1] > num[i])
            increase = false;
        if (num[i-1] < num[i])
            decrease = false;
    }
    
    return increase || decrease;
}
int main()
{
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--)
    {
        string num;
        cin >> num;
        if (isIncreasingOrDecreasing(num))
            cout << "YES" << "\n";
        else 
            cout << "NO" << "\n";
    }
    
    return 0;
}

