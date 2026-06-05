#include <stdio.h>
int main(){
    long long num;
    long long largestprime=-1;

    printf("Enter a number:");
    scanf("%lld", &num);

    while(num%2==0)
    {
        largestprime=2;
        num/=2;
    }
    for(long long i=3;i*i<=num;i+=2){
        while(num%i==0){
            largestprime=i;
            num/=i;
        }

    }
    if(num>2)
    largestprime=num;

    printf("Largest prime factor=%lld",largestprime);
    return 0;
}




