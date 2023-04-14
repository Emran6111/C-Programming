#include<stdio.h>
int main ()
{
    int n, i,even=0, odd=0;
    scanf("%d", &n);
    int arr[n];
        for (i = 0; i <n; i++)
        {
          scanf("%d", &arr[i]);  
        }
        for (i = 0; i <n; i++)
        {
            if(arr[i]%2==0)
            {
         even= even+arr[i];
            }
            else if (arr[i]%2!=0)
            {
                odd= odd+arr[i];
            }
        }
        printf("%d %d\n", even, odd);
    return 0;
}