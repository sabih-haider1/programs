#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=10;i>0;i--)
    {
        for(j=10;j>i;j--)
        {
            cout<<" ";

        }
        cout<<"*";
        for(k=0;k<i*2;k++)
        {
            cout<<" ";

        }
        cout<<"*"<<endl;
    }
}