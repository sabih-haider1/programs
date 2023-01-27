#include<iostream>
using namespace std;
int main()
{
    int x,y,mul,gcd;
    double ans;
    gcd=1;
    cout<<"Enter 1st number = "<<endl;
    cin>>x;
    cout<<"Enter 2nd number = "<<endl;
    cin>>y;
    mul=x*y;
    for (int i=1;i<=x&&i<=y;i++) 
        {
            if (x%i==0&&y%i==0) 
            {
                gcd=i;
            }
        }
    ans=mul/gcd;
    cout<<"The LCM of given numbers = "<<ans<<endl;
    return 0;
}