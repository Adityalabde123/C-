#include<iostream>
#include<string.h>
using namespace std;
class DEMO{
    public:
    int replace(char s1[100],char c1,char c2)
    {
        int cnt=0;
        for(int i=0;s1[i]!='\0';i++)
        {
            if(s1[i]==c1)
            {
            s1[i]=c2;
        cnt++;
        }
        }
    
    cout<<"\n replace string="<<s1;
    return cnt;
}
}ob;
int main()
{
     char i[100]="aditya";
    cout<<"number of replacement="<<ob.replace(i,'t','k')<<endl;
}
