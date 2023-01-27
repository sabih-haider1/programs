#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k,check,de,count=0;
    const int size = 10;
    int set1[size],set2[size],uni[2*size];
    de=size;
    cout<<"The first Array elements are = ";
    for(i=0;i<size;i++)
    {
        set1[i]=rand()%10;
        cout<<set1[i]<<", ";
    }
    cout<<endl;
    cout<<"The second Array elements are = ";
    for(i=0;i<size;i++)
    {
        set2[i]=rand()%10;
        cout<<set2[i]<<", ";
    }
    cout<<endl;
    cout<<"The union of Arrays are = ";
    for (i = 0; i < de; i++)
    {
        for (j = i + 1; j < de;)
        {
            if (set1[j] == set1[i])
            {
                for (k = j; k < de; k++)
                {
                    uni[k] = set1[k + 1];
                    count++;
                }
                de--;
            }
            else
                j++;
        }
    }
    for(k=0;k<size*2;k++)
    {
        check=1;
        for(j=0;j<size;j++)
        {
            if(set2[j]==uni[k])
            {
                check=0;
                break;
            }
        }
        if(check)
        {
            uni[k]=set2[j];
        }
    }
    for(i=0;i<size*2;i++)
    {
        cout<<uni[i]<<", ";
    }
    cout<<endl;
    return 0;
}
