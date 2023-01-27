#include<iostream>
using namespace std;
int main()
{
    //Calculating gase mileage
    float g_mileage,g_gallons,miles;
    cout<<"Enter Gas Gallons consumed = "<<endl;
    cin>>g_gallons;
    cout<<"Enter Distance covered in miles = "<<endl;
    cin>>miles;
    g_mileage=miles/g_gallons;
    cout<<"The Gas Mileage is = "<<g_mileage<<"per/gallon"<<endl;
    return 0;
}