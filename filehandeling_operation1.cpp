#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
     ofstream f1,f2;
     int n,num;
     f1.open("even.txt",ios::out);
     f2.open("odd.txt",ios::out);
     cout<<"enter limit";
     cin>>n;
     for(int i=1;i<n;i++)
     {
        cout<<"enter number";
        cin>>num;
        if(num%2==0)
        f1<<num<<endl;
         else
         f2<<num<<endl;
     }
     f1.close();
     f2.close();
}