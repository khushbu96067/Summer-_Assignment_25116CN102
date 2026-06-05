#include <stdio.h>
int main(){
    int n,a=0,b=1,c;

    printf("Enter n:");
    scanf("%d",n);
    
    if(n=0)
    printf("NTH Fibonacci term=0");
    else if(n==1)
    printf("NTH Fibonacci term=1");
    else{
        for(int i=2; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
}
printf("NTH Fibonacci term=%d",b);
    }
    return 0;
}