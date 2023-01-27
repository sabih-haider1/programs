#include<iostream>
using namespace std;
int main()
{
    int i,j,k,z=10,a;
    for(i=0;i<10;i++)
    {
        for(j=0;j<z;j++)
        {
            cout<<" ";

        }
        cout<<"*";
        z--;
        if(i==5)
        {
            for (a=0;a<10;a++)
            cout<<"*";
        }
        else
        {
        for(k=0;k<i*2;k++)
        {
            cout<<" ";

        }
        }
        cout<<"*"<<endl;
    }
}