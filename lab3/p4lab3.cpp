#include<iostream>
using namespace std;
int main()
{
	int i,x,ans,start,end;
	cout << "Enter a positive number=" << endl;
	cin >> x;
    start=(x/8)+1;
    end=start+10;

    for(i=start;i<=end;i++)
    {
        if(x<8*i)
        {
            ans=8*i;
            cout<<ans<<endl;

        }
    }
	return 0;
}