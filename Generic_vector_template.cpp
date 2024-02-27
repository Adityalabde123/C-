#include<iostream>
using namespace std;
template<class T>
class vector{
    T v[20];
    int size;
    public:
    vector()
    {
       size=0;
    }
           void create();
           void modify();
           void multi();
           void display();
};
template<class T>
void vector<T>::create()
{
     int i;
     T value;
     char ans;
     
      do{
         cout<<"\n enter index & value";
         cin>>i>>value;
         v[i]=value;
         size++;
         cout<<"\n do you want more element";
         cin>>ans;

      }while(ans=='Y'||ans=='y');

}
template<class T>
void vector<T>::modify()
{
     int key;
     T newval;
     cout<<"enter index for modification";
     cin>>key;
     cout<<"\n enter new value";
     cin>>newval;
     v[key]=newval;

}
template<class T>
void vector<T>::display()
{
    int i;
     cout<<"size of vector"<<size<<endl;
     cout<<"\n elements of vector are:(";
      cout<<"(";
      for(i=0;i< size;i++)
      {
         cout<< v[i] <<" ";

      }
      cout<<")"<<endl;
}
template<class T>
void vector<T>::multi(){
  int i;
  int scalarval;
  cout<<"\n enter scaler value for multiplicartion";
  cin>>scalarval;
  for(i=0;i<size;i++)
  v[i]=v[i]*scalarval;
}
int main()
{
     int ch;
     vector<int>ob;
     cout<<"\n programme of template class";
     do{
            cout<<"enter choice";
            cin>>ch;
            switch(ch)
            {
                  case 1:ob.create();
                    break;
                  case 2:ob.display();
                    break;
                  case 3:ob.multi();
                    break;
                  case 4:ob.modify();
                    break;
                  case 0:cout<<"invalind choice";
                    break;
            }
     }while(ch!=0);
     return 0;
     }
