#include<iostream>
using namespace std;
class a{
    public:
      a()
      {
         cout<<"I am defaulter of a";
      }

};
class b:public a{
    public:
    b()
    {
        cout<<"i am defaulter of b";
    }
};
int main()
{
    b ob;
}