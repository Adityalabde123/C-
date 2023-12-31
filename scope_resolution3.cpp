#include<iostream>
using namespace std;
class t{
    int a,b;
    public:
         void getdata();
         void putdata();

};

class t::getdata(){
    cin>>a>>b;

}
class t::putdata()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

}


int main()
{
    t ob;
    ob.getdata();
    ob.putdata();

}