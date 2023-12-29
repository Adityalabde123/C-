#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    cout<<"swap value of a="<<a;
    cout<<"swap value of b="<<b;
}
int main()
{
    int a,b;
    cout<<"enter two nos:";
    cin>>a>>b;
    cout<<"\n before swap a="<<a;
    cout<<"\n before swap b="<<b;
    swap(a,b);
    cout<<"\n after swap a="<<a;
    cout<<"\n after swap b="<<b;
}