#include <stdio.h>
int main()
{
    int n,rem,product=1;

    printf("Enter a number:");
    scanf("%d", &n);

    while(n !=0)
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
    printf("product of digit =%d",product);
    return 0;
}