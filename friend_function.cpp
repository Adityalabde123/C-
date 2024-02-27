#include<iostream>
using namespace std;
class demo{
    private:
            int a,b,c;
            friend void addition(demo &ob);
    public:
           void accept()
           {
               cout<<"enter two nos:";
               cin>>a>>b;

           }

};
    void addition(demo &ob)
    {
         ob.c=ob.a+ob.b;
         cout<<"\n addition"<<ob.c;
    }
    int main()
    {
         demo ob;
         ob.accept();
         addition(ob);

    }