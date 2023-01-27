#include<iostream>
using namespace std;
int main()
{
   int num1,num2,num3,num4,num5,a,b,c,d,e;
   cout<<"Enter marks of Physics = "<<endl;
   cin>>a;
   cout<<"Enter marks of Computer = "<<endl;
   cin>>b;
   cout<<"Enter markss of Math = "<<endl;
   cin>>c;
   cout<<"Enter marks of English = "<<endl;
   cin>>d;
   cout<<"Enter marks of Urdu = "<<endl;
   cin>>e;
   //a greater than all numbers
   if(a>b&&a>c&&a>d&&a>e)
   {
    num1=a;
    //checking for b
    if(b>c&&b>d&&b>e)
    {
        num2=b;
    }
    else if(b>c&&b>d&&b<e)
    {
        num3=b;
    }
    else if(b>c&&b<d&&b<e)
    {
        num4=b;
    }
    else if(b<c&&b<d&&b<e)
    {
        num5=b;
    }
    else if(b<c&&b>d&&b<e)
    {
        num4=b;
    }
    else if(b<c&&b>d&&b>e)
    {
        num3=b;
    }
    else if(b>c&&b<d&&b>e)
    {
        num3=b;
    }
    else if(b<c&&b<d&&b>e)
    {
        num4=b;
    }
    //checking for c
    if(c>b&&c>d&&c>e)
    {
        num2=c;
    }
    else if(c>b&&c>d&&c<e)
    {
        num3=c;
    }
    else if(c>b&&c<d&&c<e)
    {
        num4=c;
    }
    else if(c<b&&c<d&&c<e)
    {
        num5=c;
    }
    else if(c<b&&c>d&&c<e)
    {
        num4=c;
    }
    else if(c<b&&c>d&&c>e)
    {
        num3=c;
    }
    else if(c>b&&c<d&&c>e)
    {
        num3=c;
    }
    else if(c<b&&c<d&&c>e)
    {
        num4=c;
    }
    //checking for d
    if(d>c&&d>b&&d>e)
    {
        num2=d;
    }
    else if(d>c&&d>b&&d<e)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d<e)
    {
        num4=d;
    }
    else if(d<c&&d<b&&d<e)
    {
        num5=d;
    }
    else if(d<c&&d>b&&d<e)
    {
        num4=d;
    }
    else if(d<c&&d>b&&d>e)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d>e)
    {
        num3=d;
    }
    else if(d<c&&d<b&&d>e)
    {
        num4=d;
    }
    //checking for e
    if(e>c&&e>b&&e>d)
    {
        num2=e;
    }
    else if(e>c&&e>b&&e<d)
    {
        num3=e;
    }
    else if(e>c&&e<b&&e<d)
    {
        num4=e;
    }
    else if(e<c&&e<b&&e<d)
    {
        num5=e;
    }
    else if(e<c&&e>b&&e<d)
    {
        num4=e;
    }
    else if(e<c&&e>b&&e>d)
    {
        num3=e;
    }
    else if(e>c&&e<b&&e>d)
    {
        num3=e;
    }
    else if(e<c&&e<b&&e>d)
    {
        num4=e;
    }
   }
   //b greater than all numbers

   if(b>a&&b>c&&b>d&&b>e)
   {
    num1=b;
    //checking for a
    if(a>c&&a>d&&a>e)
    {
        num2=a;
    }
    else if(a>c&&a>d&&a<e)
    {
        num3=a;
    }
    else if(a>c&&a<d&&a<e)
    {
        num4=a;
    }
    else if(a<c&&a<d&&a<e)
    {
        num5=a;
    }
    else if(a<c&&a>d&&a<e)
    {
        num4=a;
    }
    else if(a<c&&a>d&&a>e)
    {
        num3=a;
    }
    else if(a>c&&a<d&&a>e)
    {
        num3=a;
    }
    else if(a<c&&a<d&&a>e)
    {
        num4=a;
    }
    //checking for c
    if(c>a&&c>d&&c>e)
    {
        num2=c;
    }
    else if(c>a&&c>d&&c<e)
    {
        num3=c;
    }
    else if(c>a&&c<d&&c<e)
    {
        num4=c;
    }
    else if(c<a&&c<d&&c<e)
    {
        num5=c;
    }
    else if(c<a&&c>d&&c<e)
    {
        num4=c;
    }
    else if(c<a&&c>d&&c>e)
    {
        num3=c;
    }
    else if(c>a&&c<d&&c>e)
    {
        num3=c;
    }
    else if(c<a&&c<d&&c>e)
    {
        num4=c;
    }
    //checking for d
    if(d>c&&d>a&&d>e)
    {
        num2=d;
    }
    else if(d>c&&d>b&&d<e)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d<e)
    {
        num4=d;
    }
    else if(d<c&&d<b&&d<e)
    {
        num5=d;
    }
    else if(d<c&&d>b&&d<e)
    {
        num4=d;
    }
    else if(d<c&&d>b&&d>e)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d>e)
    {
        num3=d;
    }
    else if(d<c&&d<b&&d>e)
    {
        num4=d;
    }
    //checking for e
    if(e>c&&e>a&&e>d)
    {
        num2=e;
    }
    else if(e>c&&e>a&&e<d)
    {
        num3=e;
    }
    else if(e>c&&e<a&&e<d)
    {
        num4=e;
    }
    else if(e<c&&e<a&&e<d)
    {
        num5=e;
    }
    else if(e<c&&e>a&&e<d)
    {
        num4=e;
    }
    else if(e<c&&e>a&&e>d)
    {
        num3=e;
    }
    else if(e>c&&e<a&&e>d)
    {
        num3=e;
    }
    else if(e<c&&e<a&&e>d)
    {
        num4=e;
    }
   }
    //c greater than all numbers
   if(c>b&&c>a&&c>d&&c>e)
   {
    num1=c;
    //checking for a
    if(a>b&&a>d&&a>e)
    {
        num2=a;
    }
    else if(a>b&&a>d&&a<e)
    {
        num3=a;
    }
    else if(a>b&&a<d&&a<e)
    {
        num4=a;
    }
    else if(a<b&&a<d&&a<e)
    {
        num5=a;
    }
    else if(a<b&&a>d&&a<e)
    {
        num4=a;
    }
    else if(a<b&&a>d&&a>e)
    {
        num3=a;
    }
    else if(a>b&&a<d&&a>e)
    {
        num3=a;
    }
    else if(a<b&&a<d&&a>e)
    {
        num4=a;
    }
    //checking for b
    if(b>a&&b>d&&b>e)
    {
        num2=b;
    }
    else if(b>a&&b>d&&b<e)
    {
        num3=b;
    }
    else if(b>a&&b<d&&b<e)
    {
        num4=b;
    }
    else if(b<a&&b<d&&b<e)
    {
        num5=b;
    }
    else if(b>a&&b>d&&b<e)
    {
        num4=b;
    }
    else if(b<a&&b>d&&b>e)
    {
        num3=b;
    }
    else if(b>a&&b<d&&b>e)
    {
        num3=b;
    }
    else if(b<a&&b<d&&b>e)
    {
        num4=b;
    }
    //checking for d
    if(d>a&&d>b&&d>e)
    {
        num2=d;
    }
    else if(d>a&&d>b&&d<e)
    {
        num3=d;
    }
    else if(d>a&&d<b&&d<e)
    {
        num4=d;
    }
    else if(d<a&&d<b&&d<e)
    {
        num5=d;
    }
    else if(d<a&&d>b&&d<e)
    {
        num4=d;
    }
    else if(d<a&&d>b&&d>e)
    {
        num3=d;
    }
    else if(d>a&&d<b&&d>e)
    {
        num3=d;
    }
    else if(d<a&&d<b&&d>e)
    {
        num4=d;
    }
    //checking for e
    if(e>a&&e>b&&e>d)
    {
        num2=e;
    }
    else if(e>a&&e>b&&e<d)
    {
        num3=e;
    }
    else if(e>a&&e<b&&e<d)
    {
        num4=e;
    }
    else if(e<a&&e<b&&e<d)
    {
        num5=e;
    }
    else if(e<a&&e>b&&e<d)
    {
        num4=e;
    }
    else if(e<a&&e>b&&e>d)
    {
        num3=e;
    }
    else if(e>a&&e<b&&e>d)
    {
        num3=e;
    }
    else if(e<a&&e<b&&e>d)
    {
        num4=e;
    }
   }
    //d greater than all numbers
   if(d>b&&d>c&&d>a&&d>e)
   {
    num1=d;
    //checking for a
    if(a>c&&a>b&&a>e)
    {
        num2=a;
    }
    else if(a>c&&a>b&&a<e)
    {
        num3=a;
    }
    else if(a>c&&a<b&&a<e)
    {
        num4=a;
    }
    else if(a<c&&a<b&&a<e)
    {
        num5=a;
    }
    else if(a<c&&a>b&&a<e)
    {
        num4=a;
    }
    else if(a<c&&a>b&&a>e)
    {
        num3=a;
    }
    else if(a>c&&a<b&&a>e)
    {
        num3=a;
    }
    else if(a<c&&a<b&&a>e)
    {
        num4=a;
    }
    //checking for b
    if(b>c&&b>a&&b>e)
    {
        num2=b;
    }
    else if(b>c&&b>a&&b<e)
    {
        num3=b;
    }
    else if(b>c&&b<a&&b<e)
    {
        num4=b;
    }
    else if(b<c&&b<a&&b<e)
    {
        num5=b;
    }
    else if(b<c&&b>a&&b<e)
    {
        num4=b;
    }
    else if(b<c&&b>a&&b>e)
    {
        num3=b;
    }
    else if(b>c&&b<a&&b>e)
    {
        num3=b;
    }
    else if(b<c&&b<a&&b>e)
    {
        num4=b;
    }
    //checking for c
    if(c>b&&c>a&&c>e)
    {
        num2=c;
    }
    else if(c>b&&c>a&&c<e)
    {
        num3=c;
    }
    else if(c>b&&c<a&&c<e)
    {
        num4=c;
    }
    else if(c<b&&c<a&&c<e)
    {
        num5=c;
    }
    else if(c<b&&c>a&&c<e)
    {
        num4=c;
    }
    else if(c<b&&c>a&&c>e)
    {
        num3=c;
    }
    else if(c>b&&c<a&&c>e)
    {
        num3=c;
    }
    else if(c<b&&c<a&&c>e)
    {
        num4=c;
    }
    //checking for e
    if(e>c&&e>b&&e>a)
    {
        num2=e;
    }
    else if(e>c&&e>b&&e<a)
    {
        num3=e;
    }
    else if(e>c&&e<b&&e<a)
    {
        num4=e;
    }
    else if(e<c&&e<b&&e<a)
    {
        num5=e;
    }
    else if(e<c&&e>b&&e<a)
    {
        num4=e;
    }
    else if(e<c&&e>b&&e>a)
    {
        num3=e;
    }
    else if(e>c&&e<b&&e>a)
    {
        num3=e;
    }
    else if(e<c&&e<b&&e>a)
    {
        num4=e;
    }
   }
    //e greater than all numbers
   if(e>b&&e>c&&e>d&&e>a)
   {
    num1=e;
    //checking for b
    if(b>c&&b>d&&b>a)
    {
        num2=b;
    }
    else if(b>c&&b>d&&b<a)
    {
        num3=b;
    }
    else if(b>c&&b<d&&b<a)
    {
        num4=b;
    }
    else if(b<c&&b<d&&b<a)
    {
        num5=b;
    }
    else if(b<c&&b>d&&b<a)
    {
        num4=b;
    }
    else if(b<c&&b>d&&b>a)
    {
        num3=b;
    }
    else if(b>c&&b<d&&b>a)
    {
        num3=b;
    }
    else if(b<c&&b<d&&b>a)
    {
        num4=b;
    }
    //checking for c
    if(c>b&&c>d&&c>a)
    {
        num2=c;
    }
    else if(c>b&&c>d&&c<a)
    {
        num3=c;
    }
    else if(c>b&&c<d&&c<a)
    {
        num4=c;
    }
    else if(c<b&&c<d&&c<a)
    {
        num5=c;
    }
    else if(c<b&&c>d&&c<a)
    {
        num4=c;
    }
    else if(c<b&&c>d&&c>a)
    {
        num3=c;
    }
    else if(c>b&&c<d&&c>a)
    {
        num3=c;
    }
    else if(c<b&&c<d&&c>a)
    {
        num4=c;
    }
    //checking for d
    if(d>c&&d>b&&d>a)
    {
        num2=d;
    }
    else if(d>c&&d>b&&d<a)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d<a)
    {
        num4=d;
    }
    else if(d<c&&d<b&&d<a)
    {
        num5=d;
    }
    else if(d<c&&d>b&&d<a)
    {
        num4=d;
    }
    else if(d<c&&d>b&&d>a)
    {
        num3=d;
    }
    else if(d>c&&d<b&&d>a)
    {
        num3=d;
    }
    else if(d<c&&d<b&&d>a)
    {
        num4=d;
    }
    //checking for a
    if(a>c&&a>d&&a>b)
    {
        num2=a;
    }
    else if(a>c&&a>d&&a<b)
    {
        num3=a;
    }
    else if(a>c&&a<d&&a<b)
    {
        num4=a;
    }
    else if(a<c&&a<d&&a<b)
    {
        num5=a;
    }
    else if(a<c&&a>d&&a<b)
    {
        num4=a;
    }
    else if(a<c&&a>d&&a>b)
    {
        num3=a;
    }
    else if(a>c&&a<d&&a>b)
    {
        num3=a;
    }
    else if(a<c&&a<d&&a>b)
    {
        num4=a;
    }
   }
   cout<<"The decending order is = ";
    cout<<num1<<", "<<num2<<", "<<num3<<", "<<num4<<", "<<num5<<endl;
    return 0;
}