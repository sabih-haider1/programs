#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter = "<<endl;
    cin>>i;
    for(int count=1;count<=10;count++)
    {
        {
            if(i%8==0)
            cout<<i<<endl;
        }
    }
}