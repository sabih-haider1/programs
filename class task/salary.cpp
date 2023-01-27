#include<iostream>
using namespace std;
int main()
{
    int basic,da,hr,gsalary,ysalary;
    cout<<"Enter Khursheed basic salary="<<endl;
    cin>>basic;
    da=basic*0.37;
    hr=basic*0.25;
    gsalary=basic+da+hr;
    ysalary=12*gsalary;
    cout<<"Your Gross salary="<<gsalary<<endl;
    cout<<"Your Year salary="<<ysalary<<endl;
    return 0;
}
