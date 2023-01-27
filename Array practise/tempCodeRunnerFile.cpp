#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,a,b,x,c;
    cout<<"Enter the length of numbers for inverting values = ";
    cin>>x;
    cout<<endl;
    int arr[x];
    for(i=0;i<x;i++)
    {
        arr[i]=rand()%100;
        cout<<arr[i]<<endl;
    }
    for(j=0;j<x;j++)
    {
        k=x;
        k-1;
    if(x%2==0)
    {
        if(j<k)
        {
        arr[j]=arr[j]+arr[k];
        arr[k]=arr[i]-arr[k];
        arr[i]=arr[i]-arr[k];
        k--;
        }
    }
    }
    for(c=0;c<x;c++)
    {
        cout<<arr[c]<<endl;
    }
    return 0;
}