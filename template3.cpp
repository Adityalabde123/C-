#include<iostream>
using namespace std;
template<class T1>
void disp(T1 a[])
{
    cout<<"array elements";
    for(int i=4;i>=0;i--)
    cout<<a[i]<<" ";
}
int main()
{
     int a[5];
     char b[5][10];
     cout<<"enter int array elements";
     for(int i=0;i<5;i++)
     cin>>a[i];
    disp(a);

    cout<<"enter char element";
     for(int i=0;i<5;i++)
     cin>>b[i];
    disp(b);

}