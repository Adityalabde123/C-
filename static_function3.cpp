//display product using static variable.
#include<iostream>
using namespace std;
class product{
    int pid,qty,price,cnt;
    string pname;
    public:
    void accept()
    {
        cout<<"enter id qty price  pname";
        cin>>pid>>qty>>price>>pname;
        static int c1;
         c1++;
         cnt=c1;
    }
    void disp()
    {
        cout<<"pid="<<pid<<" ";
        cout<<"qty="<<qty<<" ";
        cout<<"price="<<price<<" ";
        cout<<"pname="<<pname<<" ";
        cout<<"product count="<<cnt<<endl;
    }
};
int main()
{
    product ob,ob1,ob2;
    ob.accept();
    ob1.accept();
    ob2.accept();

    ob.disp();
    ob1.disp();
    ob2.disp();
    return 0;
}