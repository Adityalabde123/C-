#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;


int main()
{
     ifstream f1("student.txt",ios::in);
     ofstream f2("grade.txt",ios::out);
     int i,rno,m1,m2,m3;
     char name[20],g;
     if(f1.bad())
     exit(0);
     for(i=0;i<4;i++)
     {
         f1>>rno>>name>>m1>>m2>>m3;
         float avg=(m1+m2+m3)/3;
         if(avg>=70)
         g='O';
        else if(avg>=40)
        g='p';
        else
        g='F';
        f2<<rno<<" "<<name<<" "<<avg<<" "<<g<<endl;        
     }
     f1.close();
     f2.close();
     cout<<"Student's marks calculate successfully";

}