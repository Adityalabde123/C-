//display maximum salary using this-> function
#include<iostream>
#include<string.h>
using namespace std;
class EMP{
    public:
     int eno;
     char ename[20],designation[20];
     float sal;
     void accept(int eno,char ename[20],float sal,char designation[20])
     {
        this->eno=eno;
        strcpy(this->ename,ename);
        this->sal=sal;
        strcpy(this->designation,designation);
     } 
     void disp()
     {
        cout<<"emp no="<<eno;
        cout<<"emp name="<<ename;
        cout<<"salary="<<sal;
        cout<<"designation="<<designation;
     }
}ob,ob1;
int main()
{
    ob.accept(101,"aditya",45000,"worker");
    ob1.accept(102,"om",50000,"worker");
    if(ob.sal>ob1.sal)
    ob.disp();
    else
    ob1.disp();
}