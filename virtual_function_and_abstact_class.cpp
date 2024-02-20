#include<iostream>
using namespace std;
class media{
    virtual void acceptn()=0;
    virtual void dispn()=0;
    virtual void acceptm()=0;
    virtual void dispm()=0;
};
class newspaper:public media{
    public:
    int npages,nprice;
    char nname[20],neditor[20];
    void acceptn()
    {
        cout<<"enter no of pages and price,newspaper name,editor name";
        cin>>npages>>nprice>>nname>>neditor;

    }
    void dispn()
    {
        cout<<"no of pages="<<npages;
        cout<<"price="<<nprice;
        cout<<"name="<<nname;
        cout<<"editor="<<neditor;
    }
           
};
class magzine:public newspaper{
    public:
    char mname[20],meditor[20];
    int mprice;
    void acceptm()
    {
    cout<<"enter magzine name and meditor and mprice";
    cin>>mname>>meditor>>mprice;
    }
    void dispm()
    {
        cout<<"magzine name="<<mname;
        cout<<"magzine editor="<<meditor;
        cout<<"magzine price="<<mprice;
    }
};
int main()
{
    newspaper ob1;
    ob1.acceptn();
    ob1.dispn();
    magzine ob2;
    ob2.acceptm();
    ob2.dispm();
}