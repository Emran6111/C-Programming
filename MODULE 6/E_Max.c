#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, a, max = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d", max);
    return 0;
}