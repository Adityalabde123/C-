//slips....
#include<iostream>
using namespace std;
class num{
     private:
           int a,b;
    public:
           void accept()
{
      cout<<"enter two number ";
      cin>>a>>b;

}
    friend class multiplication;
};
class multiplication
{
    public:
     void multi(num &ob)
     {
     int c=ob.a*ob.b;
     cout<<"multiplication of two number="<<c;
}
};
int main()
{
     num ob;
     ob.accept();
     multiplication ob1;
     ob1.multi(ob);


}