#include<iostream>
using namespace std;
class travels{
    public:
         int tno;
         char cname[20];
         void acceptt()
         {
            cout<<"enter travel no company name";
            cin>>tno>>cname;

         }


};
class route:public travels{
    public:
         int rid;
         char source[20],destination[20];
         void acceptr()
         {
              cout<<"enter route id source name destination";
              cin>>rid>>source>>destination;

         }
};
class reservation:public route{
    public:
          int seats,tdate;
          char tclass[20],fare[20];
          void accept()
          {
            cout<<"enter seats,travel date,class,fare";
            cin>>seats>>tdate>>tclass>>fare;
          }
          void disp()
          {
            cout<<"\n travel no="<<tno<<endl;
            cout<<"\n company name="<<cname<<endl;
            cout<<"\n route id ="<<rid<<endl;
            cout<<"\n source="<<source<<endl;
            cout<<"\n destination="<<destination<<endl;
            cout<<"\n no of seats="<<seats<<endl;
            cout<<"\n travel date="<<tdate<<endl;
            cout<<"\n travel class="<<tclass<<endl;
            cout<<"fare="<<fare<<endl;
          }
};
int main()
{
    int n,search;
    cout<<"enter date to search specific travelar";
    cin>>search;
    cout<<"enter limit";
    cin>>n;
    reservation ob[n];
    for(int i=0;i<n;i++)
    {
       ob[i].acceptt();
       ob[i].acceptr();
       ob[i].accept();
       
    }
    for(int i=0;i<n;i++)
    {
      ob[i].disp();
    }
    for(int i=0;i<n;i++)
    {
    if(search==ob[i].tdate)
    {
      
      {
        cout<<"found";
        ob[i].disp();
        break;
      }
    }
}
}
