#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class emp
{
     public:
            ofstream f1;
            ifstream f2;
            int eno;
            char ename[20];
            float sal;
            void accept(int n)
            {
                f1.open("emp.txt",ios::out);
                for(int i=0;i<n;i++)
                {
                     cout<<"enter emp no name sal";
                     cin>>eno>>ename>>sal;
                     f1<<eno<<endl;
                     f1<<ename<<endl;
                     f1<<sal<<endl;
                }
                f1.close();
            }

void disp(int n){
    f2.open("emp.txt",ios::in);
    for(int i=0;i<n;i++)
    {
         f2>>eno;
         f2>>ename;
         f2>>sal;
         cout<<"\n emp no="<<eno;
         cout<<"\n emp name="<<ename;
         cout<<"\n sal="<<sal;
    }
}
};
int main()
{
     emp ob;
     int num;
     cout<<"enter limit";
     cin>>num;
    ob.accept(num);
    ob.disp(num);

}
