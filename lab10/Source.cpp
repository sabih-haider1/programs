#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	cout << "Enter number of rows = ";
	cin >> n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
}