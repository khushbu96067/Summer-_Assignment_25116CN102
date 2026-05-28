#include <stdio.h>
int main(){

    int num , i;
    long long factorial = 1;


     printf("Enter a number: ");
     scanf("%d" , &num);

     if(num < 0){

    printf(" Error! factorial of negative number doesnot exist!");
     }

     else if(num <= 1){

        printf(" factorial of %d = %lld" ,num, factorial);
     } 
     else{
        for(int i = 1; i <= num; i++){
            factorial = factorial * i;
        }
        printf(" factorial of %d = %lld", num, factorial);
     }
 return 0;

}
