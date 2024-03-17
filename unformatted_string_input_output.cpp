//getline,write...
#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    char s1[20];
    cout<<"enter string";
    cin.getline(s1,20);
    cout<<"characters=";
    cout.write(s1,20);
}