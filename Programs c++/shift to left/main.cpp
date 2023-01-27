#include<iostream>
using namespace std;
int main()
{
    const int size = 10;
    int arr[size],x;
    cout<<"Enter the numbers you want to shift = ";
    cin>>x;
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + x];
        if (i >= size - x)
        {
            arr[i] = 0;
            cout << arr[i] << ",";
        }
        else
            cout << arr[i] << ",";
    }
    system("pause");
}
