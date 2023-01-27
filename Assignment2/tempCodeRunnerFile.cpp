#include <iostream>
using namespace std;
int main() 
{
    for (char i = 0; i < 127; i++)
    {
        cout<<i<<" ";
        if(i%16==0)
        {
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}
