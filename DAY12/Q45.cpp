#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int rev=0,temp=n;

    while(n>0)
{
rev=rev*10+n%10;
n/=10;
}
return temp==rev;
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if (palindrome(num))
    cout<<num<<"is a palindrome Number";
    else
    cout<<num<<"is not a palindrome Number";
    return 0;
}


