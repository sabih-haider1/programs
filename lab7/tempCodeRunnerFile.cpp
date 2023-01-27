#include<iostream>
using namespace std;
int main()
{
    int i,a,b,ans=0;
    cout<<"Enter 4 digit number = "<<endl;
    cin >> a ;
    for(i=0;i<4;i++)
    {
        b=a%10;
        a=a/10;
        ans=ans+b;
    }
    cout<<"The sum of digits is = "<<ans<<endl;
    return 0;
}