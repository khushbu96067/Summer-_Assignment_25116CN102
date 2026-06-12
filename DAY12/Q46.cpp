#include <iostream>
#include <math.h>
using namespace std;

bool armstrong(int n)
{
    int temp=n,digits=0,sum=0;

    while (temp>0)
    {
        digits++;
        temp/=10;
    }
    temp=n;

    while(temp>0)
{
    int rem=temp%10;
    sum+=pow(rem,digits);
    temp/=10;
}
return sum==n;
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if (armstrong(num))
    cout<<num<<"is an Armstrong Number";
    else
    cout<<num<<"is not an Armstrong Number";
    return 0;
}



