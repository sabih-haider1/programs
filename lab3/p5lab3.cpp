#include<iostream>
using namespace std;
int main()
{
	float i,x,highest;
    highest=0;
	for (i = 1; i <= 5; i++)
	{
		cout << "Enter decimal number=" << endl;
	    cin >> x;
        if(x>highest)
        {
            highest=x;	
        }
	}
    cout<<"The highest number is = "<<highest<<endl;
	return 0;
}