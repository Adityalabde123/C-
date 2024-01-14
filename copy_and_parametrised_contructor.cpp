#include<iostream>
using namespace std;
class vector {
    public: 
      int size,*elements,i;
      vector()
      {
        cout<<"enter the size of vector";
        cin>>size;
        elements=new int[size];
        for( i=0;i<size;i++){
        cin>>elements[i];
        }
      }
      void display()
      {
        cout<<"(";
        for(i=0;i<size;i++)
        {
            cout<<elements[i];
            if(i<size-1)
            {
              cout<<",";
            }
        }
        cout<<")";
      }
      vector(vector &ob)
     {
          
     }
};
int main()
{
  vector ob;
  ob.display();
}        