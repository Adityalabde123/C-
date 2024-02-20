#include<iostream>
using namespace std;
class function{
    public:
           virtual void even_odd(int n)=0;
           virtual void cube(int n)=0;
};
class shape:public function{
    public:
          void even_odd(int n)
          {
            if(n%2==0)
            {
                cout<<"number is even";
            }
            else{
                cout<<"number is odd";
            }
          }
          void cube(int n){
             int s=n*n*n;
             cout<<"\n cube="<<s;

          }
};
int main()
{
    shape ob;
    ob.even_odd(90);
    ob.cube(5);
}