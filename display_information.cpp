#include<iostream>
#include<string>
using namespace std;
class emp
{
    public:
    int eno;
    char ename[20];
    float sal;
   void accept(int eno1,char ename1[20],float sal1)
   {
    eno=eno1;
    strcpy(ename,ename1);
    sal=sal1;
   }
   void disp()
   {
     cout<<"\n empno="<<eno;
     cout<<"\n ename="<<ename;
     cout<<"\n sal="<<sal;
   }
}ob;

 int main()
 {
    emp ob;
    ob.accept(202,"aditya",50000.2f);
    void disp();
 }