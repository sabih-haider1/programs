#include<iostream>
using namespace std;
int main()
{
    int x,n=0;
    cout<<"Enter n digits of number = "<<endl;
    cin>>n;
    cout<<"The reverse order = ";
    while(n!=0)
    {
        x=n%10;
        n=n/10;
		cout<<x;
    }
	cout<<endl;
    return 0;
}