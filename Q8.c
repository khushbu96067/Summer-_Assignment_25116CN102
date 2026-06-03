#include <stdio.h>
int main()
{
    int n,origional,reverse=0,rem;
    printf("Enter a number:");
    scanf("%d", &n);
    origional=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if (origional==reverse)
    {
        printf("palindrome number");
    }
            else
            {
            printf("Not a palindrome number");
}
            return 0;
        }





