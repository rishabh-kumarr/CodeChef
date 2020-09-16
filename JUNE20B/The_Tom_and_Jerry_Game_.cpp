// PROBLEM CODE: EOEO
// RISHABH

#include <bits/stdc++.h>
int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        long long TS, count = 0;
        std::cin >> TS;
        if (TS % 2 != 0)
        {
            count = TS / 2;
            std::cout << count << std::endl;
        }
        else
        {
            while (TS % 2 == 0)
            {
                TS = TS / 2;
            }
            count = TS / 2;
            std::cout << count << std::endl;
        }
    }
    return 0;
}
