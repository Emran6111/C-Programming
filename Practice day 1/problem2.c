#include<stdio.h>
int main ()
{
    int a,b,sum,sub,mul;
    float div;
    printf(" Enter the number 1 : ");
    scanf("%d",&a);
    printf(" Enter the number 2 : ");
    scanf("%d",&b);
    sum= a+b;
    sub= a-b;
    mul= a*b;
    div= a*1.0/b;
   
    printf("%d + %d = %d\n", a,b,sum);
    printf("%d - %d = %d\n", a,b,sub);
    printf("%d * %d = %d\n", a,b, mul);
    printf("%d / %d = %.2f", a,b, div);
    return 0;
}