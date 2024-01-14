#include<iostream>
using namespace std;
class college{
    public: 
           int cno;
           char cname[20],add[20];
          void acceptc()
          { 
              cout<<"enter college no,name,add";
              cin>>cno>>cname>>add;  
          }
};
class student:public college
{
    public:
          int rno;
          char sname[20];
          float per;
          void accepts()
          {
            cout<<"enter roll no,sname,per";
            cin>>rno>>sname>>per;

          }
          void disp()
          {
             cout<<"college no="<<cno<<endl;
             cout<<"college name="<<cname<<endl;
             cout<<"college add="<<add<<endl;
             cout<<"roll no="<<rno<<endl;
             cout<<"student name"<<sname<<endl;
             cout<<"student per"<<per<<endl;
          }
};
int main()
{
    student ob;
    ob.acceptc();
    ob.accepts();
    ob.disp();
}
