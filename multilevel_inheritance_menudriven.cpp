//slips...
#include<iostream>
using namespace std;
class student{
    public:
       int sid;
       char name[20],sclass[20];
       void accepts()
       {
          cout<<"enter sid,sname,class";
          cin>>sid>>name>>sclass;
       }
};
class competition{
    public:
    int cid;
    char cname[20];
    void acceptc()
    {
        cout<<"enter compition id and name";
        cin>>cid>>cname;
    }
};
class rank:public student,public competition{
    public:
           int rank;
           void acceptr()
           {
              cout<<"enter rank";
              cin>>rank;
           }
           void disp()
           {
              cout<<"student id"<<sid;
              cout<<"student sname"<<name;
              cout<<"student class"<<sclass;
              cout<<"compitition id"<<cid;
              cout<<"compition name"<<cname;
              cout<<"rank"<<rank;
           }
};

int main()       
{
    int ch,n;
    cout<<"enter limit";
    cin>>n;
    rank ob[n];
    
    do{
    switch(ch)
    {
      case 1:ob.accepts();
             ob.acceptc();
             ob.acceptr();
             break;
       case 2:ob.disp();
              break;
        case 3:
               for(int i=0;i<n;i++)
               {
                 if(ob[i].rank>ob[i+1])
                 {
                     ob.disp();
                 }
               }
    }
}while(ch>4);
}
