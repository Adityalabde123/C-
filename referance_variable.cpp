#include<iostream>
using namespace std;
int main()
{
    int p=10;
    int *a=&p;
    int &b=*a;
     cout<<"*a="<<*a<<"b="<<b<<endl;
 
}