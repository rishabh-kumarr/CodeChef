#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[10];
    while (n--)
    {
        scanf("%s", &a);
        printf("%d\n", (a[0] - '0' + a[strlen(a) - 1] - '0'));
    }
}
