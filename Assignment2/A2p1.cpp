#include<iostream>
using namespace std;
int main()
{
    int x,n,ans=0;
    cout<<"Enter n digits of number = "<<endl;
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        ans=ans+x;
    }
    cout<<"The sum of digits of givin number = "<<ans<<endl;
    return 0;
}