//product and discount..
#include<iostream>
using namespace std;
class product{
    public:
         int pid;
         char pname[20];
          float rate;
          void acceptp()
          {
             cout<<"enter product id,name,rate";
             cin>>pid>>pname>>rate;
          }

};

class discount:public product{
    public:
           float discountrate;
           void acceptd()
           {
              cout<<"enter discount rate";
              cin>>discountrate;
           }
           float cal()
           {
               return rate *(1-discountrate/100);
           }
};
int main()
{
    discount ob;
    ob.acceptp();
    ob.acceptd();
    ob.cal();

    cout<<"product id="<<ob.pid<<endl;
    cout<<"product name="<<ob.pname<<endl;
    cout<<"product id="<<ob.rate<<endl;
    cout<<"discount="<<ob.cal()<<endl;
}
