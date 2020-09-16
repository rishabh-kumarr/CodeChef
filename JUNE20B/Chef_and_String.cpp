// PROBLEM CODE: XYSTR
// RISHABH

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T, N, i, count = 0;
	string S;
	std::cin >> T;
	while (T--)
	{
		cin >> S;
		N = S.size();
		for (i = 0; i < N - 1;)
		{
			if ((S[i] != S[i + 1]))
			{
				count++;
				i += 2;
			}
			else
				i++;
		}
		cout << count << std::endl;
		count = 0;
		S.clear();
	}
	return 0;
}
