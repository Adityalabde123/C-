#include<iostream>
using namespace std;
class DEMO{
    public:
        int a=10;
        void show()
        {
           a=33;
            cout<<"value of a="<<a;
            cout<<"\nvalue of a="<<this->a;
            }
}ob;
int main()
{
   ob.show();
}