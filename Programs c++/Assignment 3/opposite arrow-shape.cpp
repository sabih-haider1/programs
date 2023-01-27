//#include<iostream>
//using namespace std;
//int main(){
//    int n,i,j,k,l,a,b,c,d,dec1,dec2;
//    cout<<" * Enter the height of the shape : ";
//    cin>>n;
//    cout<<endl;
//    dec1=n;
//    dec2=n-1;
//    d=0;
//    for(i=0;i<n;i++)
//    {
//        if(i<=n/2)
//        {
//            for(j=0;j<i;j++)
//            {
//                cout<<"*";
//            }
//            for(k=0;k<dec1;k++)
//            {
//                cout<<" ";
//            }
//            dec1=dec1-2;
//            for(l=0;l<i;l++)
//            {
//                cout<<"*";
//            }
//        }
//        else
//        {
//            for(a=n;a>i;a--)
//            {
//                cout<<"*";
//            }
//            if(n%2==0)
//            {
//                cout<<" ";
//            }
//                for(b=0;b<(d*2)+1;b++)
//                {
//                    cout<<" ";
//                }
//                for(c=0;c<dec2/2;c++)
//                {
//                    cout<<"*";
//                }
//                d++;
//                dec2=dec2-2;
//
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//
