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
    int i,n,max,index;
    cout<<"enter limit";
    cin>>n;
    EMP ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].accept();

    }  
       max=ob[0].sal;
       index=0;
       for(i=1;i<n;i++)
       {
         if(ob[i].sal>max)
         {
            max=ob[i].sal;
            index=i;
         }
       }
       ob[index].disp();
}