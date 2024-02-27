#include<iostream>
using namespace std;
class A{
    public:
           void add(int a,int b)
           {
                int c=a+b;
                cout<<"addition 1="<<c;
           }
};
class B{
    public:
           void add(int a,int b)
           {
                int c=a+b;
                cout<<"addition 2="<<c;
           }
};
int main()
{
B ob;
ob.add(10,10);
ob.add(200,100);
ob.add(300,355);
}                                  