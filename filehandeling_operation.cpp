#include<iostream>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
     ifstream f1("abc.txt",ios::in);
     char ch;
     int c1=0,c2=0,c3=0,c4=0,c5=0;
     if(f1.fail())
     {
        cout<<"file not found";
        exit(0);

     }
     while(!f1.eof())
     {
        f1.get(ch);
        if(isalpha(ch))
        c1++;
        else if(isdigit(ch))
        c2++;
        else if(ch==' '||ch=='\n')
        c3++;
         else 
         c5++;
        if(ch=='\n')
        c4++;
     }
     cout<<"\n Alphabets="<<c1;
     cout<<"\ndigits="<<c2;
     cout<<"\nwords="<<c3;
     cout<<"\n symbols="<<c5;
     cout<<"\n lines="<<c4;
     f1.close();
}
