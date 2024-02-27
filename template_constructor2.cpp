#include<iostream>
using namespace std;
template<class T1>
void circle(T1 r)
{
    T1 a=3.14*r*r;
    cout<<"\n area of circle="<<a;
}
template<class T1>
void rect(T1 l,T1 b)
{
    T1 a=l*b;
    cout<<"\n area of rectangle="<<a;

}
 int main()
 {
     circle(5);
     circle(5.7);
     rect(5,9);
     rect(3,3);
 }