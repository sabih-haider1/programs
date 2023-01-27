#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[5],i,k,a;
    for(i=0;i<5;i++)
    {
        arr[i]=rand()%10;
        cout<<arr[i]<<" - ";
        a=arr[i];
        for(k=0;k<a;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}