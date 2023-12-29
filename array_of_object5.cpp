#include<iostream>
#include<string.h>
using namespace std;
class EMP{
    public:
     int eno;
     float sal;
     char ename[20];
     void accept()
     {
        cout<<"enter emp no,ename,sal";
        cin>>eno>>ename>>sal;
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
    int pass,i,n;
    cout<<"enter limit";
    cin>>n;
    EMP ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].accept();
    }
    for(pass=1;pass<n;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(strcmp(ob[i].ename,ob[i+1].ename)>0)
            {
                EMP t=ob[i];
                ob[i]=ob[i+1];
                ob[i+1]=t;
            }
        }
      }
      for(i=0;i<n;i++)
      ob[i].disp();
}
