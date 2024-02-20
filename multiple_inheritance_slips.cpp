//creating boidata of person and acedamikc details using multiple inheritance..
#include<iostream>
using namespace std;
class person{
    public:
    int bdate;
    char name[20],add[20],email[20];
    void acceptp()
    {
        cout<<"enter bdate,name,add,email";
        cin>>bdate>>name>>add>>email;
    }
};
class academic{
    public:
    int ssc,hsc;
    char pclass[20];
    void accepta()
    {
        cout<<"enter ssc,hsc marks and present class";
        cin>>ssc>>hsc>>pclass;
    }
};
class boidata:public person,public academic{
    public:
    void disp()
    {
        cout<<"\n student birth date="<<bdate;
        cout<<"\n student name="<<name;
        cout<<"\n student address="<<add;
        cout<<"\n student email="<<email;
        cout<<"\n student ssc marks="<<ssc;
        cout<<"\n student hsc marks="<<hsc;
        cout<<"\n student present class="<<pclass;
        
    }
};
int main()
{
    boidata ob;
    ob.acceptp();
    ob.accepta();
    ob.disp();
}