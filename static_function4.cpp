//differance between time,hours and seconds.
#include<iostream>
using namespace std;
class time{
    public:
    int hh,mm,ss;
    void accept()
    {
        cout<<"enter hours:";
        cin>>hh;
        cout<<"enter minutes";
        cin>>mm;
        cout<<"enter seconds";
        cin>>ss;
    }
    void disp()
    {
       cout<<"time="<<hh<<mm<<ss<<endl;

    }
     static void differance(time ob,time ob1)
     {
        int h,m,s;
        if(ob.hh>ob1.hh)
        {
            h=ob.hh-ob1.hh;
            m=ob.mm-ob1.mm;
            s=ob.ss-ob1.ss;
            cout<<"differance="<<h<<":"<<m<<":"<<s;
        }
     }
};
int main()
    time ob,ob1;
    ob.accept();
    ob.disp();
    ob1.accept();
    ob1.disp();
    time::differance(ob,ob1);
}
