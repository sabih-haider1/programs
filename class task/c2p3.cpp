#include<iostream>
using namespace std;
int main()
{
    int i,j,k,z=10;
    for(i=0;i<10;i++)
    {
        for(j=0;j<z;j++)
        {
            cout<<" ";

        }
        cout<<"*";
        z--;
        for(k=0;k<i*2;k++)
        {
            cout<<" ";

        }
        cout<<"*"<<endl;
    }
}