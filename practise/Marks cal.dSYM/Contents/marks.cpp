#include<iostream>
using namespace std;
int main()
{
    float Q1, Q2, Q3, Q4, Q5,QT,A1, A2, A3, A4, A5,AT,mid,w_mid,final,w_final,t_marks;
    char ch1;
    do
    {
    //Taking input of Quiz marks.
	cout<<"Enter Quiz total marks as below"<<endl;
    cout<<"Q1= 10"<<endl;
    cin >> Q1;
    cout<<"Q2= 10"<<endl;
    cin >> Q2;
    cout<<"Q3= 20"<<endl;
    cin >> Q3;
    cout<<"Q4= 30"<<endl;
    cin >> Q4;
    cout<<"Q5= 10"<<endl;
    cin >> Q5;
	QT = ((Q1 + Q2 + Q3 + Q4 + Q5)/80)*20 ;
    //Taking input of Assignment marks.
	cout<<"Enter Assignment total Marks as below"<<endl;
    cout<<"A1= 15"<<endl;
    cin >> A1;
    cout<<"A2= 20"<<endl;
    cin >> A2;
    cout<<"A3= 25"<<endl;
    cin >> A3;
    cout<<"A4= 30"<<endl;
    cin >> A4;
    cout<<"A5= 10"<<endl;
    cin >> A5;
	AT = ((A1 + A2 + A3 + A4 + A5)/100)*20 ;
    //Taking input of Mid marks.
    cout<<"Enter Mid marks out 40"<<endl;
    cin>>mid;
    w_mid=(mid/40)*30;
    //Taking input of Final marks.
    cout<<"Enter Final marks out 50"<<endl;
    cin>>final;
    w_final=(final/50)*30;
    //Displying total marks.
    t_marks=QT+AT+w_mid+w_final;
    cout<<"Your total marks is ="<<t_marks<<endl;
    if(t_marks<=100&&t_marks>=85)
    {
        cout<<"You have A grade."<<endl;
    }
    else if(t_marks<=84&&t_marks>=75)
    {
        cout<<"You have B grade."<<endl;
    }
    else if(t_marks<=74&&t_marks>=65)
    {
        cout<<"You have c grade."<<endl;
    }
    else if(t_marks<=64&&t_marks>=50)
    {
        cout<<"You have d grade."<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    cout<<"You want to calculate marks again (y/n) ="<<endl;
    cin>>ch1;
    }while(ch1=='y'||ch1=='Y');
}