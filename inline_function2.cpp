//area and perimeter of rectangle.
#include<iostream>
using namespace std;

inline float area(float l,float b)
{
    return l*b;
}
inline float perimeter(float l,float b)
{
    return 2*(l+b);
}
int main()
{
    float l,b;
    cout<<"enter length and breadth";
    cin>>l>>b;
    cout<<"area of triangle"<<area(l,b);
    cout<<"area of perimeter"<<perimeter(l,b);

}