#include<iostream>
#include<string>
using namespace std;
class student{
    public:
       int sno;
      string name,sclass;
       void accept()
       {
            static int cnt=0;
        cnt++;
        cout<<"student count="<<cnt<<endl;
     
          cout<<"Enter roll no,name,sclass";
          cin>>sno>>name>>sclass;  
       
         }
      void disp()
      {
        cout<<"student roll no.="<<sno<<endl;
        cout<<"student name="<<name<<endl;
        cout<<"student class="<<sclass<<endl;
      }
};
int main()
{
  student ob,ob1,ob2;
  ob.accept();
  ob.disp();
  ob1.accept();
  ob1.disp();
  ob2.accept();
  ob2.disp();
}