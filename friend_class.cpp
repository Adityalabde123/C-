#include<iostream>
using namespace std;
class A{
     private:
             int a,b;
      public:
            void accept()
            {
                 cout<<"enter numbers";
                 cin>>a>>b;
            }
            friend class B;

};

class B{
       public:
               void show(A &ob)
              {
                 cout<<"\n value of A="<<ob.a;
                 cout<<"\n value of B="<<ob.b;
              }

};
int main()
{
     A ob;
     ob.accept();
     B ob1;
     ob1.show(ob);
}