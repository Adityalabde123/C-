#include<iostream>
using namespace std;
class add{
    public:
            int *a,*b,c;
            add(){
                a=new int(11);
                b=new int(11);
                c=*a+*b;
                cout<<"addition="<<c;
            }
            ~add()
            {
                delete a;
                delete b;
                cout<<"memory free";
            }
};
 int main()
 {
    add ob;

 }