#include<iostream>
using namespace std;
int main()
{
    int i,n,fac,x;
    fac=1;
    cout<<"Enter number to find factorial = "<<endl;
    cin>>n;
    x=n;
    for(i=0;i<x;i++)
    {
        fac=fac*n;
        n--;
    }
    cout<<"factorial = "<<fac<<endl;
}