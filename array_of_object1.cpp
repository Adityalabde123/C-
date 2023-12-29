#include<iostream>
using namespace std;
class EMP{
    public:
     int eno;
     float sal;
     char ename[20];
     void accept()
     {
        cout<<"enter emp no,ename,sal";
        cin>>eno>>sal>>ename;
     }
     void disp()
     {
        cout<<"emp no="<<eno<<endl;
        cout<<"salary="<<sal<<endl;
        cout<<"ename="<<ename<<endl;
     }
};
int main()
{
    EMP ob[5];
    for(int i=0;i<3;i++)
    {
        ob[i].accept();
    }
    for(int i=0;i<3;i++)
    {
        ob[i].disp();
    }
}