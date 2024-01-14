//accept student exam and result..
#include<iostream>
using namespace std;
class student{
    public:
            int rno;
            char sclass[20],sname[20];
            void accepts()
            {
                cout<<"enter student rno,sclass,sname";
                cin>>rno>>sclass>>sname;
            }
};
class exam:public student{
    public:
       int m1,m2,m3,m4,m5,m6;
       void accepte()
       {
           cout<<"enter 6 subjet marks";
           cin>>m1>>m2>>m3>>m4>>m5>>m6;
       }
};
class result:public exam{
    public:
    int s,p;
        int calc()
        {
           s=m1+m2+m3+m4+m5+m6;
           p=s/6;
        }
        void res()
        {
            cout<<"student roll no"<<rno<<endl;
            cout<<"student name"<<sname<<endl;
            cout<<"student sclass"<<sclass<<endl;
            cout<<"student m1 marks"<<m1<<endl;
            cout<<"student m2 marks"<<m2<<endl;
            cout<<"student m3 marks"<<m3<<endl;
            cout<<"student m4 marks"<<m4<<endl;
            cout<<"student m5 marks"<<m5<<endl;
            cout<<"student m6 marks"<<m6<<endl;
            cout<<"student total marks"<<s<<endl;
            cout<<"student total percentage"<<p<<endl;
        }
};
int main()
{
    result ob;
    ob.accepts();
    ob.accepte();
    ob.calc();
    ob.res();   
}