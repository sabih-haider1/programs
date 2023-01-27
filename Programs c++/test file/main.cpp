#include<iostream>
using namespace std;
int main()
{
    int x,n1,n2,n3,tem1=0,tem2=0,tem3=0;
    cout<<"Enter the amount your younger brother want = ";
    cin>>x;
    cout<<endl;
    cout<<"Enter the number of 5 rupee coins = ";
    cin>>n1;
    cout<<endl;
    cout<<"Enter the number of 2 rupee coins = ";
    cin>>n2;
    cout<<endl;
    cout<<"Enter the number of 1 rupee coins = ";
    cin>>n3;
    cout<<endl;
    tem1=x/5;
    x=x%5;
    while(tem1>n1)
        {
            x=x+5;
            tem1--;
        }
    tem2=x/2;
    x=x%2;
    while(tem2>n1)
        {
            x=x+2;
            tem2--;
        }
    tem3=x;
    cout<<"The number of 5 rupee coins = "<<tem1<<endl;
    cout<<"The number of 2 rupee coins = "<<tem2<<endl;
    cout<<"The number of 1 rupee coins = "<<tem3<<endl;
    return 0;
}
