#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    cout<<"\n swap values of a="<<*a;
    cout<<"\n swap values of b="<<*b;

}
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"\n before swap a="<<a;
    cout<<"\n before swap b="<<b;
    swap(&a,&b);
    cout<<"after swap a="<<a;
    cout<<"after swap b="<<b;
}