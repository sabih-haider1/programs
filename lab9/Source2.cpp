#include<iostream>
using namespace std;
int main()
{
	int row, i, n;
	cout << "Enter number of rows = "; cin >> row; cout << endl;
	for (i = 0; i < row; i++)
	{
		for (int j = row; j>i; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i*2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
}