#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    long long N, rev = 0;
    while (T--)
    {
        cin >> N;
        while (N > 0)
        {
            rev = rev * 10 + N % 10;
            N /= 10;
        }
        cout << rev << endl;
        rev = 0;
    }
    getchar();
    return 0;
}
