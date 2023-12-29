#include<iostream>
using namespace std;
class demo
{
    public:
           void add(int a,int b)
           {
             int c=a+b;
             cout<<"\n addition1="<<c;
           }
           void add(int a,int b,int c)
           {
            int d=a+b+c;
            cout<<"addition2="<<d;
           }
           void add(double a,double b)
           {
            double c=a+b;
            cout<<"\n addition 3="<<c;
           }

}ob;

int main()
{
    ob.add(11,22);
    ob.add(100,200);
    ob.add(11.44,22.44);
    ob.add(11,22,33);
}