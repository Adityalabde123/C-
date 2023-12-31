//addition and substraction using static function.
#include<iostream>
using namespace std;
class DEMO{
    public:
       static void add(int a,int b)
       {
          int c=a+b;
          cout<<"addition="<<c<<endl;
       }
    
       static void sub(int a,int b)
       {
          int c=a-b;
          cout<<"substraction="<<c<<endl;
       }
}ob;
int main()
{
    ob.add(11,33);
    ob.sub(11,33);
}