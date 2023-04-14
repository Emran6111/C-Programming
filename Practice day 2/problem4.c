#include <stdio.h>
int main()
{
    int a, b, div;
    scanf("%d %d", &a, &b);
    div = a - b;
    if (div < 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", div);
    }
    return 0;
}