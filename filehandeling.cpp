#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f1;
    char ch;
    f1.open("abc.txt",ios::in);

    if(f1.fail())
    {
         cout<<"file not found";
         exit(0);
    }
    while(!f1.eof())
    {
         f1.get(ch);
         cout<<ch;

    }
    f1.close();

}





















