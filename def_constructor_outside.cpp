//print using outside..
#include<iostream>
using namespace std;
class emp{
    public:
        int eno;
        char ename[20];
        float sal;
        emp();
        void display()
        {
            cout<<"emp no="<<eno;
            cout<<"emp name="<<ename;
            cout<<"salary="<<sal;
        }
};
emp::emp()
{
    cout<<"enter no,name,sal";
    cin>>eno>>ename>>sal;
    
}
int main()
{
    emp ob;
    ob.display();
}