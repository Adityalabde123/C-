#include<iostream>
using namespace std;
class shape{
    public:
        virtual void area()=0;      
        virtual void volume()=0;      
};
class rectangle:public shape
{
    public:
        float l,b,h;
         rectangle(float l,float b,float h)
        {
             this->l=l;
             this->b=b;
             this->h=h;
        }
        void area()
        {
            float a=l*h;
            cout<<"area of rectangle="<<a;
        }
        void volume()
        {
            float v=l*b*h;
            cout<<"volume of rectangle="<<v;
        }
};
class circle:public shape
{
    public:
        float r;
         circle(float r)
        {
             
             this->r=r;
        }
        void area()
        {
            float a=3.14*r*r;
            cout<<"area of circle="<<a;
        }
        void volume()
        {
            cout<<"it's not possible to calculate volume of circle because..circle have dimension";
        }
};
class cylinder:public shape
{                               
    public:
        float h,r;
         cylinder(float h,float r)
        {
             this->h=h;
             this->r=r;
        }
        void area()
        {
            float a=2*3.14*r*h+2*3.14*r*r;
            cout<<"area of cylinder="<<a;
        }
        void volume()
        {
            float v= 3.14*r*r*h;
            cout<<"volume of cylinder="<<v;
        }
};
int main()
{
    
    rectangle ob(3.3,4.4,5.5);
    circle ob1(2.5);
    cylinder ob2(5.5,4.5);
    ob.area();
    ob.volume();
    ob1.area();
    ob1.volume();
    ob2.area();
    ob2.volume();

}