#include <stdio.h>
int main()
{
    int a, num1, num2;
    scanf("%d", &a);
    num1 = a % 10;
    num2 = a / 10;
    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}