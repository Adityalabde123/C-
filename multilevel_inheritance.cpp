#include<iostream>
using namespace std;
class a{
    public:
        a()
        {
            cout<<"i am constructor of a";
        }
};
class b:public a
{
      public:
      b()
      {
        cout<<"\n i am constructor of b";
}
};
class c:public b
{
    public:
          c()
          {
              cout<<"\n i am constructor of c";
          }
};
int main()
{
    c ob;
}