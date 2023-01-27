#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout << "Enter number of rows = ";
	cin >> n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - i; j++)
		{
			cout << " ";
		}
		for (k = 0; k <= i*2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}