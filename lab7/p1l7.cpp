#include<iostream>
using namespace std;
int main()
{
    int i,a,b;
    cout<<"Enter 4 digit number = "<<endl;
    cin >> a ;
    for(i=0;i<4;i++)
    {
        b=a%10;
        a=a/10;
        cout<<b<<", ";
    }
    cout<<endl;
    return 0;
}