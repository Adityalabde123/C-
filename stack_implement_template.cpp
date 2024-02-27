#include<iostream>
using namespace std;
#define MAX 5
template<class T1>
class stack{
    public:
           T1 a[MAX];
           int top;
           stack()
           {
             top=-1;
           }
           int isfull()
           {
              if(top==MAX-1)
              return 1;
              else 
            return 0;
           }
           int isempty()
           {
             if(top==-1)
              return 1;
              else
               return 0;
           }
           void push(T1 num)
           {
              if(isfull())
              cout<<"stack is overflow/full";
              else
              { 
                 top++;
                 a[top]=num;
                 cout<<"\n push successful";
              }
           }
           void pop()
           {
              T1 val;
              if(isempty())
              {
                 cout<<"stack empty";
              }
              else{
                 val=a[top];
                 top--;
                 cout<<"\n popped value="<<val;
              }
           }

};
int main()
{
     int ch;
     stack<int>s1;
     do{
         cout<<"enter choice";
         cin>>ch;
         switch(ch)
         {
             case 1:s1.push(10);
             s1.push(20);
             s1.push(30);
             s1.push(40);
             break;
             case 2:s1.pop();
                     break;
         }
     }while(ch!=3);
}