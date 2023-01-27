#include<iostream>
using namespace std;
int main()
{
    //Finding illiterate men and women while the population of the town is 80,000
    //ill stands for illiterate
    float t_ill,ill_men,ill_women,per_ill;
    per_ill=100-48;
    t_ill=(per_ill/100)*80000;
    ill_men=35*t_ill/100;
    ill_women=t_ill-ill_men;
    cout<<"Illiterate men are = "<<ill_men<<endl;
    cout<<"Illiterate women are = "<<ill_women<<endl;
    return 0;
}