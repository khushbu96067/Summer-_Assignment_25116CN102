#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int sum=0;
    int ld=1;
    while(n>0)
{
    ld=n%10;
    sum=sum+ld;
    n=n/10;
}
printf("sum of digits =%d",sum);
return 0;
}