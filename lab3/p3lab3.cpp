#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	cout << "Enter 4 digit number=" << endl;
	cin >> a;
	for (i = 1; i <= 4; i++)
	{
		b = a % 10;
		a = a / 10;
		cout << b<<endl;
	}
	system("pause");
	return 0;
}