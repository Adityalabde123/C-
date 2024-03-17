//store the uppercase and lowercase characters in seprate files into one file
#include<ctype.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream f1;
    ofstream f2,f3,f4,f5;
    char ch;
    f1.open("abc.txt");
    f2.open("upper.txt",ios::out);
    f3.open("lower.txt",ios::out);
    f4.open("digit.txt",ios::out);
    f5.open("others.txt",ios::out);
    if(!f1.good())
    {
        cout<<"\n file not found";
        exit(0);
    }
    while(!f1.eof())
    {
         f1.get(ch);
         if(isupper(ch))
         f2.put(ch);
         else if(islower(ch))
         f3.put(ch);
         else if(isdigit(ch))
         f4.put(ch);
         else
         f5.put(ch);

         
    }
    cout<<"all files copy suceessfully";
    f1.close();
    f2.close();
    f3.close();
    f4.close();
    f5.close();

}