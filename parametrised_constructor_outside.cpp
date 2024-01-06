#include<iostream>
#include<string.h>
using namespace std;
class emp{
    public:
         int eno;
         char ename[20];
         float sal;
         emp(int eno,char ename[20],float sal);
         void display()
         {
            cout<<"emp no="<<eno;
            cout<<"emp name="<<ename;
            cout<<"emp sal="<<sal;
         }
};
emp::emp(int eno,char ename[20],float sal)
{
            this->eno=eno;
            strcpy(this->ename,ename);
            this->sal=sal;
}
int main()
{
    emp ob(101,"aditya",10000);
    ob.display();
}