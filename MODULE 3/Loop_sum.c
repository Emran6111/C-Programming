#include<stdio.h>
int main ()
{
    int sum=0,n,i;
    scanf("%d", &n);
    for ( i =1; i <=n; i=i+1)
    {
        sum+=i;
    }
    printf("%d", sum );
    
    return 0;
}