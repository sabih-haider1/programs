#include<iostream>
using namespace std;
int main()
{
	int row, i, n;
	cout << "Enter number of rows = "; cin >> row; cout << endl;
	for (i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	system("pause");
}