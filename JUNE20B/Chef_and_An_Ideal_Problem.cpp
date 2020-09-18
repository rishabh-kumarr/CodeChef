// PROBLEM CODE: CHFIDEAL

#include <bits/stdc++.h>
int main()
{
    int a[] = {0, 1, 2, 3}, b, c;
    c = 1 + (rand() % 3);
    printf("%d\n", c);
    fflush(stdout);
    scanf("%d", &b);
    int i;
    a[b] = 0;
    a[c] = 0;
    for (i = 1; i < 4; i++)
    {
        if (a[i] != 0)
        {
            printf("%d", a[i]);
            fflush(stdout);
        }
    }
}
