#include<stdio.h>
int main ()
{
    char a;
    scanf("%c", &a);
    if (a>='a' && a<='z')
    {
        int b=a-32;
        printf("%c\n", b);
    }
    else if (a>='A' && a<='Z')
    {
        int c=a+32;
        printf("%c\n", c);
    }
    return 0;
}