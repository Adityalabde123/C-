//accept value from user.
#include<iostream>
#include<string.h>
using namespace std;
class emp{
    public:
          int eno;
          char ename[20];
          float sal;
          emp(int eno,char ename[20],float sal)
          {
            this->eno=eno;
            strcpy(this->ename,ename);
            this->sal=sal;
          }
          void display()
          {
             cout<<"emp no="<<eno;
             cout<<"emp name="<<ename;
             cout<<"emp sal="<<sal;
          }
};
int main()
{
    int eno;
    char ename[20];
    float sal;
    cout<<"enter no,name,sal";
    cin>>eno>>ename>>sal;
    emp ob(eno,ename,sal);
    ob.display();
}