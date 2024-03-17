#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2;
    char ch,ch1;
    f1.open("abc.txt",ios::in);
    f2.open("pqr.txt",ios::out);
    if(f1.fail())
    {
         cout<<"file is not found";
         exit(0);
    }
    while(!f1.eof())
    {
        f1.get(ch);
        if(ch==' ')
        {
          f1.get(ch);
          if(ch1==' ')
          f2.put(ch);
        else{
            f2.put(ch);
            f2.put(ch1);
        }
    }
    else
    f2.put(ch);
}
cout<<"file copy successfully";
f1.close();
f2.close();
}