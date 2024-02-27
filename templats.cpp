//with usinng single parameter...
#include<iostream>
using namespace std;
template<class T1>
void add(T1 a,T1 b)
{   

      T1 c=a+b; 
     cout<<"addition="<<c;
}
 int main()
  {
     add(11,22);
     add(11.10f,12.10f);
     add(11.10,12.10);
  }
