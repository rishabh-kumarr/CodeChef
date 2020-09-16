// PROBLEM CODE: CHFICRM
// RISHABH

#include <bits/stdc++.h>
int main()
{
    int T, N, a;
    std::cin >> T;
    while (T--)
    {
        int five = 0, ten = 0, x = 0, y = 0;
        std::cin >> N;
        for (int i = 0; i < N; i++)
        {
            std::cin >> a;
            if (a == 5)
            {
                five++;
            }
            if (a == 10)
            {
                if (five >= 1)
                {
                    five--;
                    ten++;
                }
                else
                {
                    x++;
                }
            }
            if (a == 15)
            {
                if (ten >= 1)
                {
                    ten--;
                }
                else if (five >= 2)
                {
                    five -= 2;
                }
                else
                {
                    y++;
                }
            }
        }
        five = 0;
        ten = 0;
        if (x == 0 && y == 0)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
