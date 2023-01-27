#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j;
    const int size =7;
    int a[size],b[size],uni[size*2];
    for(i=0;i<size;i++)
    {
        a[i]=rand()%10;
        b[i]=rand()%10;
        cout<<a[i]<<", "<<endl;
        cout<<b[i]<<", ";
    }
}