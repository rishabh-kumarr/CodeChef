// PROBLEM CODE: EVENM
// RISHABH

#include <bits/stdc++.h>
using namespace std;
void evenmatrix(int N)
{
    int ra[N * N + 1] = {0};
    for (int i = 0; i < N * N; i++)
        ra[i] = i + 1;
    vector<vector<int> > a;
    int k = 0;
    if (N % 2 != 0)
    {
        int i, j;
        for (i = 0; i < N; i++)
        {
            vector<int> x;
            for (j = 0; j < N; j++)
            {
                x.push_back(ra[k++]);
            }
            a.push_back(x);
        }
    }
    else
    {
        int i, j;
        for (i = 0; i < N; i++)
        {
            vector<int> x;
            for (j = 0; j < N; j++)
            {
                x.push_back(ra[k++]);
            }
            if (i % 2 != 0)
            {
                reverse(x.begin(), x.end());
                a.push_back(x);
            }
            else
            {
                a.push_back(x);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        evenmatrix(N);
    }
    return 0;
}
