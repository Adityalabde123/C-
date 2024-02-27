//slips...
#include<iostream>
using namespace std;
class integer_array
{
    private:
             int a[5];
             friend void disp_avg(integer_array &ob);
    public:
           void accept()
           {
               cout<<"enter 5 int number";
               for(int i=0;i<5;i++)
                
                  cin>>a[i];

               
           }
};
void disp_avg(integer_array &ob){
     int s=0;
       float avg;
       for(int i=0;i<5;i++)
     
          s=s+ob.a[i];
          avg=(float)s/5;
           cout<<"\n average of integer="<<avg;
           
    
}
class float_array
{
    private:
             float a[5];
             friend void disp_avg(float_array &ob);
    public:
           void accept()
           {
               cout<<"enter 5 float number";
               for(int i=0;i<5;i++)
                          cin>>a[i];

          }
};
void disp_avg(float_array &ob){
     float s=0;
       float avg;
       for(int i=0;i<5;i++)
       
          s=s+ob.a[i];
          avg=s/5;
        cout<<"\n average of float="<<avg;

       
};
int main()
{
    integer_array ob1;
    float_array ob2;
    ob1.accept();
    disp_avg(ob1);

    ob2.accept();
    disp_avg(ob2);
}