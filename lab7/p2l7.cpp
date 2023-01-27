#include<iostream>
using namespace std;
int main()
{
   int i, n, ans;
   cout << "Enter the value for nth term" << endl;
   cin >> n; ans = 0;
   for (i=1; i < n; i++)
   {
    ans=ans + (i*i);
    cout << i << "*" << i <<"="<< i*i << endl;
   } 
    cout <<"The sum of above series = "<< ans<<endl;
    return 0;
}