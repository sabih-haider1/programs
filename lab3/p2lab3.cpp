#include<iostream>
using namespace std;
int main()
{
	int i,x,y;
	cout << "Enter First number="<<endl;
	cin >> x;
	cout << "Enter second number="<<endl;
	cin >> y;
	for (i = x; i <= y; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << endl;
		}
	}
	
	system("pause");
	return 0;
}