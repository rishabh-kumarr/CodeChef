#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0, num, i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % k == 0)
        {
            count++;
        }
    }
    printf("%d", count);
}
