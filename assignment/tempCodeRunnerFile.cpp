#include<iostream>
using namespace std;
int main()
{
    //calculating and displaying a guest's total bill
    //p for per night charge,n for number of nights, t for telephone charges, r for room service charges
    int p_night,n_nights,t_charges,r_charges,bill;
    cout<<"Enter per night charges = "<<endl;
    cin>>p_night;
    cout<<"Enter number of nights stay = "<<endl;
    cin>>n_nights;
    cout<<"Enter Telephone charges = "<<endl;
    cin>>t_charges;
    cout<<"Enter Room service charges ="<<endl;
    cin>>r_charges;
    bill=(p_night*n_nights)+t_charges+r_charges;
    cout<<"The Bill of customer is = "<<bill<<endl;
    return 0;
}