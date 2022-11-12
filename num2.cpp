#include <iostream>
using namespace std;
int grosspay(int,int);
int netpay(int);
int main()
{
    int hours,hours2,rate,rate2,grosspayv;
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<"\nEnter the rate:";
    cin>>rate;
    hours2 = hours-40;
    rate2 = rate*1.5;
    if(hours>40)
    {
        cout<<"\nThe Gross pay:"<<((grosspay(40,rate))+(grosspay(hours2,rate2)));
        grosspayv = ((grosspay(40,rate))+(grosspay(hours2,rate2)));
    }
    else
    {
        cout<<"\nThe Gross pay:"<<grosspay(hours,rate);
        grosspayv = grosspay(hours,rate);

    }
    if(grosspayv>10000000)
    {
        cout<<"\nNet pay:"<<(netpay(grosspayv)-1500000);
    }
    else
    {
        cout<<"\nNet pay:"<<netpay(grosspayv);
    }

}
int grosspay(int h,int r)
{
    return h*r;
}
int netpay(int g)
{
    return g;
}