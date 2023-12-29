//enter number to search record.
#include<iostream>
using namespace std;
class EMP{
	public:
    int eno;
    char ename[20];
    float sal;
    void accept()
    {
        cout<<"enter empno,ename,sal";
        cin>>eno>>ename>>sal;

    }
    void disp()
    {
        cout<<"emp no="<<eno<<endl;
        cout<<"emp name="<<ename<<endl;
        cout<<"sal="<<sal<<endl;
    }
};
int main()
{
    int n,num,i;
    cout<<"enter limit";\
    cin>>n;
    EMP ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].accept();
    }
    cout<<"enter number to search record";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(ob[i].eno==num)
        break;
    }
    if(i==n)
    {
        cout<<"record not found";
    }
    else{
        cout<<"record found";
    }
}
