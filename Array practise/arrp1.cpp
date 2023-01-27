#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[10],i;
    float avg,sum=0,count=0;
    cout<<"The numbers are = ";
    for(i=0;i<10;i++)
    {
        arr[i]=rand()%100;
        cout<<arr[i]<<", ";
        sum=sum+arr[i];
        count++;
    }
    avg=sum/count;
    cout<<endl;
    cout<<"The average of numbers = "<<avg<<endl;
    return 0;
}