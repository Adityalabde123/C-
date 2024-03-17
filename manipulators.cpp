//setfill,setw,setprecion,endl...
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a=4.251,b=5.51,c=11.21;
    cout<<setprecision(2);
    cout<<setfill('*');
    cout<<endl<<"value="<<setw(10)<<a;
    cout<<endl<<"value="<<setw(10)<<b;
    cout<<endl<<"value="<<setw(10)<<c;
    

}