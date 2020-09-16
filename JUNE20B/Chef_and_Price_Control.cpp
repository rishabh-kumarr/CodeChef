// PROBLEM CODE: PRICECON
// RISHABH KUMAR

#include <bits/stdc++.h>
int main()
{
	int T, N, K, P, s2 = 0, lost;
	std::cin >> T;
	while (T--)
	{
		std::cin >> N >> K;
		for (int i = 0; i < N; i++)
		{
			std::cin >> P;
			if (P > K)
			{
				lost = P - K;
				s2 += lost;
				lost = 0;
			}
		}
		std::cout << s2 << std::endl;
		s2 = 0;
	}
	return 0;
}
