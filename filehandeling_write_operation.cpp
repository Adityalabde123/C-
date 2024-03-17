#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
     ifstream f1;
     ofstream f2;
     char ch;
     f1.open("abc.txt",ios::in);
     f2.open("pqr.txt",ios::out);
     if(f1.fail())
     {
         cout<<"file not found";
         exit(0);
     }
     while(!f1.eof())
     {
        f1.get(ch);
        f2.put(ch);
     }
     cout<<"file copy successfully";
     f1.close();
     f2.close();

}
