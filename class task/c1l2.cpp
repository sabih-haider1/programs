#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=10;i<0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<i<<endl;
    }
}