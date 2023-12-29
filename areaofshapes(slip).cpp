#include<iostream>
#include<conio.h>
void area(float r)
{
    float a=3.14*r*r;
    cout<<"\n area of circle="<<a;
    
}
void area(int l,int b)
{
    float a=l*b;
    cout<<"\n area of rect="<<a;
    
}
void area(float b,float H)
{
    float a=0.5*b*h;
    cout<<"\n area of triangle="<<a;
    
}
void area(int s)
{
   int a=s*s;
    cout<<"\n area of squre="<<a;
}
int main()
{
    area(5.4f);
    area(5.4);
    area(3.4f,5.6f);
    area(5);
}