#include<iostream>
using namespace std;
int main()
{
    int a[4],l[3];
    int x,b,c,d;
    cout<<"Enter rupees: ";
    cin>>a[0];
    cout<<endl<<"Enter the number of 5 coins you have : ";
    cin>>a[1];
    cout<<endl<<"Enter the number of 2 coins you have : ";
    cin>>a[2];
    cout<<endl<<"Enter the number of 1 coins you have : ";
    cin>>a[3];
    if(a[1]!=0)
    {
        x=a[0]/5;
        b=a[0]%5;
        while(x>a[1])
            {
                b=b+5;
                x--;
            }
            cout<<endl<<"number of 5 coins you have to give : "<<x;
            l[0]=a[1]-x;
            cout<<endl<<"5 coins left : "<<l[0];
            if(b!=0)
            {
                c=b/2;
                d=b%2;
                cout<<endl<<"number of 2 coins you have to give : "<<c;
                l[1]=a[2]-c;
                cout<<endl<<"2 coins left : "<<l[1];
                if(d!=0)
                {
                    d=d/1;
                    cout<<endl<<"number of 1 coins you need to give : "<<d;
                    l[2]=a[3]-d;
                    cout<<endl<<"1 coins left : "<<l[2];
                }
            }
        else
        {
            x=a[0]/2;
            if(a[2]>=x)
        {
            cout<<endl<<"number of 2 coins you have to give : "<<x;
            b=a[0]%2;
            if(b!=0)
            {
                c=b/1;
                cout<<endl<<"number of 1 coins you have to give : "<<c;
                l[1]=a[2]-x;
                cout<<endl<<"2 coins left : "<<l[1];
                l[2]=a[3]-c;
                cout<<endl<<"1 coins left : "<<l[2];
            }
        }
        }
    }
    else if(a[1]==0)
    {
        x=a[0]/2;
        if(a[2]>=x)
        {
            cout<<endl<<"number of 2 coins you have to give : "<<x;
            b=a[0]%2;
            if(b!=0)
            {
                c=b/1;
                cout<<endl<<"number of 1 coins you have to give : "<<c;
                l[1]=a[2]-x;
                cout<<endl<<"2 coins left : "<<l[1];
                l[2]=a[3]-c;
                cout<<endl<<"1 coins left : "<<l[2];
            }
        }
        else
        {
            x=a[0]/1;
            if(a[3]>=x)
        {
            cout<<x;
            cout<<endl<<"number of 1 coins you have to give : "<<x;
            l[2]=a[3]-x;
            cout<<endl<<"1 coins left : "<<l[2];
        }
        }
    }
    else if(a[2]==0)
    {
        x=a[0]/1;
        if(a[3]>=x)
        {
            cout<<x;
            cout<<endl<<"number of 1 coins you have to give : "<<x;
            l[2]=a[3]-x;
            cout<<endl<<"1 coins left : "<<l[2];
        }
        else
        {
            cout<<endl<<"you don't have enough coins.";
        }
    }
    
}
