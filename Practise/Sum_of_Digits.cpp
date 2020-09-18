#include <stdio.h>
int main(void)
{
    int i, a, n, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum = 0;
        while (a)
        {
            sum += a % 10;
            a = a / 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
