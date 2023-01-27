#include<iostream>
using namespace std;
int main()
{
	int i,x,y,count1,count2,count3,sum,avg;
    count1=0;
    count2=0;
    count3=0;
    sum=0;
    cout<<"Enter 1st number="<<endl;
    cin>>x;
    cout<<"Enter 2nd number="<<endl;
    cin>>y;
    if(x<y)
    {
    for(i=x;i<=y;i++)
    {
        //condition for counting multiple of 7
        if(i%7==0)
        {
            count1++;
        }
        //condition for counting even numbers
        if(i%2==0)
        {
            count2++;
        }
        //taking the sum of all numbers
        sum=sum+i;
        //counting all the numbers for average and for counting number of values
        count3++;
    }
    }
    else
    {
        cout<<"Invalid input (1st number should be less than 2nd number). "<<endl;
    }
     //taking average of all numbers
        avg=sum/count3;
    cout<<"The count of multiples of 7 in between given numbers = "<<count1<<endl;
    cout<<"The count of even numbers in between given numbers = "<<count2<<endl;
    cout<<"The sum of all numbers in between given numbers = "<<sum<<endl;
    cout<<"The average of all numbers in between given numbers = "<<avg<<endl;
	cout<<"The numbers of all the values in between given numbers = "<<count3<<endl;
	return 0;
}