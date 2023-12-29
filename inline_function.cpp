//minimum & maximum number using inline function.
#include<iostream>
using namespace std;
inline int  max(int a,int b)
{
    return(a>b?a:b);
}
inline int min(int a,int b)
{
    return(a<b?a:b);
}
int main()
{
    int a,b;
   cout<<"enter two number";
   cin>>a>>b;
   cout<<"maximum no.="<<max(a,b);
   cout<<"minimum no.="<<min(a,b);
}