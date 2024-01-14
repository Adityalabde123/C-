#include<iostream>
#include<string.h>
using namespace std;
class fixdeposit{
    public:
        int fdno,fdamt,irate,mamt,nmon;
        char cust_name[20];
    fixdeposit(int fdno,char cust_name[20],int fdamt,int nmon,int irate)
        {
           this->fdno=fdno;
           strcpy(this->cust_name,cust_name);
           this->fdamt=fdamt;
           this->irate=irate;
           this->nmon=nmon;
        }
        void disp()
        {
            mamt=fdamt+(fdamt*irate*nmon/100);
             cout<<"fd no="<<fdno<<endl;
             cout<<"customer name="<<cust_name<<endl;
             cout<<"fd amount="<<fdamt<<endl;
             cout<<"intrest rate="<<irate<<endl;
             cout<<"maturity amount="<<mamt<<endl;
             cout<<"number of months="<<nmon<<endl;
        }

};
int main()
{
fixdeposit ob(101,"aditya",10000,12,8);
    ob.disp();
}