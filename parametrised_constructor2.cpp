//display day month year in proper format.
#include<iostream>
using namespace std;
class date {
    public:
        int dd,mm,yy;
        date()
        {
            dd=13;
            mm=3;
            yy=2017;
        }
        date(int dd,int mm,int yy)
        {
            this->dd=dd;
            this->mm=mm;
            this->yy=yy;
        }
        void display()
        {
            if(mm==1)
            cout<<"\ndate="<<dd<<"/jan/"<<yy;
            if(mm==2)
            cout<<"\ndate="<<dd<<"/feb/"<<yy;
            if(mm==3)
            cout<<"\ndate="<<dd<<"/mar/"<<yy;
            if(mm==4)
            cout<<"\ndate="<<dd<<"/apr"<<yy;
            if(mm==5)
            cout<<"\ndate="<<dd<<"/may/"<<yy;
            if(mm==6)
            cout<<"\ndate="<<dd<<"/june/"<<yy;
            if(mm==7)
            cout<<"\ndate="<<dd<<"/jul/"<<yy;
            if(mm==8)
            cout<<"\ndate="<<dd<<"/aug/"<<yy;
            if(mm==9)
            cout<<"\ndate="<<dd<<"/sep/"<<yy;
            if(mm==10)
            cout<<"\ndate="<<dd<<"/oct/"<<yy;
            if(mm==11)
            cout<<"\ndate="<<dd<<"/nov/"<<yy;
            if(mm==12)
            cout<<"\ndate="<<dd<<"/dec/"<<yy;
        }
};
 int main()
 {
    date ob;
    ob.display();
    date ob1(22,2,2023);
    ob1.display();
 }