#include<iostream>
using namespace std;
class emp{
    public:
    int eno;
    char ename[20];
    float sal;
    void accepte()
    {
        cout<<"enter no,name ,sal";
        cin>>eno>>ename>>sal;
    }
    
};
class fulltime:public emp{
    public:
    int daily_wadges,ndays,sal;
     void acceptf()
     {
        cout<<"enter daily wadges,no of days work";
        cin>>daily_wadges>>ndays;

     }  
     void calf()
     {
        sal=daily_wadges*ndays;
     } 
     void dispf()
     {
        cout<<"employee no="<<eno;
        cout<<"employee name="<<ename;
        cout<<"employee sal="<<sal;
        cout<<"daily wadges="<<daily_wadges;
        cout<<"no of days="<<ndays;
        cout<<"full time salary="<<sal;

     }
};
class parttime:public emp{
     public:
        int nhours,hwadges,sal;
        void acceptp()
        {
            cout<<"enter no of hours and hourly wadges";
            cin>>nhours>>hwadges;

        }
        void calp()
        {
            sal=nhours*hwadges;
        }
        void disp()
        {
             cout<<"employee no="<<eno;
             cout<<"employee name="<<ename;
            cout<<"employee sal="<<sal;
            cout<<"no of hours="<<nhours;
            cout<<"hourly wadges="<<hwadges;
            cout<<"net salary="<<sal;

        }
};
int main()
{
    fulltime ob1[100];
    parttime ob2[100];
    int n,ch;
    cout<<"enter limit";
    cin>>n;
    do{
        cout<<"enter choice";
        cin>>ch;
        switch(ch)
        {
           case 1:for(int i=0;i<n;i++)
           {
             ob1[i].accepte();
             ob1[i].acceptf();
             ob1[i].calf();
           }
           break;
           case 2:for(int i=0;i<n;i++)
                  {
                     ob2[i].accepte();  
                     ob2[i].acceptp();  
                     ob2[i].calp();  
                  }
                  break;
            case 3:for(int i=0;i<n;i++)
                {
                    if(ob1[i].sal>ob2[i].sal)
                    {
                        ob1[i].dispf();
                    }
                    else{
                        ob2[i].disp();
                    }
                }
                break;
        }
    }while(ch!=4);
}