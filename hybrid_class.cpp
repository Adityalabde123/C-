//using virtual class..
#include<iostream>
using namespace std;
class student{
    public:
           int rno;
           char sname[20];
           void accepts()
           {
               cout<<"enter roll no,name";
               cin>>rno>>sname;
           }
};
class internal:public virtual student{
    public:
    int m1[5];
    void accepti()
    {   cout<<"enter 5 subject marks Out of 30";
        for(int i=0;i<5;i++)
        {
            cin>>m1[i];
        }
    }

};
class external:public virtual student{
     public:
        int m2[5];
        void accepte()
        {
            cout<<"enter external marks Out of 70";
            for(int i=0;i<5;i++)
            {
                cin>>m2[i];
            }
        }
};
class practical:public virtual student{
   public:
          int p;
          void acceptp(){
          cout<<"enter practical mark Out of 100";
          cin>>p;
}
};
class result:public internal,public external,public practical{
    public:
           int t;
           float per;
           void calc()
           {
               t=0;
               for(int i=0;i<5;i++)
               {
                  t=t+m1[i]+m2[i];

               }
               t=t+p;
               per=(float)t/6;
           }
           void disp()
           {
              cout<<"\n student roll no="<<rno;
              cout<<"\n student name="<<sname;
              cout<<"\n student total marks="<<t;
              cout<<"\n student percentage="<<per;
           }
};
int main()
{
    result ob;
    ob.accepts();
    ob.accepti();
    ob.accepte();
    ob.acceptp();
    ob.calc();
    ob.disp();
}