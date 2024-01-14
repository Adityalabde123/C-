#include<iostream>
using namespace std;
class emp{
    public:
           int eno;
           char ename[20];
           float sal;
           emp()
           {
              cout<<"enter emp no,ename,sal";
              cin>>eno>>ename>>sal;
            }
            void display()
            {
                cout<<"emp no="<<eno;
                cout<<"emp name="<<ename;
                cout<<"sal="<<sal;
            }
};
int main()
{
    emp ob;
    ob.display();
}