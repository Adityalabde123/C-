#include<iostream>
using namespace std;
class college{
    public:
    int cno;
    char cname[20],cadd[20];
    void acceptc()
    {
        cout<<"enter college no,name,address";
        cin>>cno>>cname>>cadd;
    }
    void dispc()
    {
        cout<<"college no="<<cno;
        cout<<"college name="<<cname;
        cout<<"college address="<<cadd;
    }
};
class teacher:public college{
    public:
     char tname[20],tadd[20];
     void acceptt()
     {
        cout<<"enter teacher name and address";
        cin>>tname>>tadd;
     }
     void dispt()
     {
        cout<<"\n teacher name="<<tname;
        cout<<"\n teacher address="<<tadd;
     }
};
class student:public college{
    public:
      int rno;
      char sname[20];
      float per;
      void accepts()
      {
        cout<<"\n enter roll no name per";
        cin>>rno>>sname>>per;
      }
      void disps()
      {
         cout<<"\n roll no="<<rno;
         cout<<"\n student name="<<sname;
         cout<<"\n percentage="<<per;
      }
};
int main()
{
    college ob_college;
    teacher ob_teacher;
    student ob_student;

    ob_college.acceptc();
    ob_college.dispc();
    ob_teacher.acceptt();
    ob_teacher.dispt();
    ob_student.accepts();
    ob_student.disps();
}