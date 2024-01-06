#include<iostream>
using namespace std;
class city{
    int code;
    float population;
    string cities;
    public:
       void accept()
       {
           cout<<"enter city code";
           cin>>code;
           cout<<"enter city population";
           cin>>population;
           cout<<"enter cityname";
           cin>>cities;
       }
       void disp()
       {
          cout<<"city code="<<code<<endl;
          cout<<"city population="<<population<<endl;
          cout<<"city name="<<cities<<endl;
       }
       float getpopulation()const{
          return population;
       }
       
    const string& getcitiesname() const {
        return cities;
    }
};
int main()
{
   
    int pass,i,n,ch,t;
    string search;

    cout<<"enter limit";
    cin>>n;
    city ob[n];
    for(i=0;i<n;i++)
    {
       ob[i].accept();
    }

     do{
        cout<<"enter choice";
        cin>>ch;
     switch(ch)
     {
        case 1:for(pass=0;pass<n;pass++)
        {
            for(i=0;i<n-pass-1;i++)
            {
                if(ob[i].getpopulation()>ob[i+1].getpopulation())
                {
                    swap(ob[i],ob[i+1]);
                }
            }
        }
        cout<<"sorted population=";
        for(i=0;i<n;i++)
        {
            ob[i].disp();
        }
        break;
        case 2:cout<<"enter city name to serach";
               cin>>search;
               for(i=0;i<n;i++)
               {
               	  if(search==ob[i].getcitiesname())
               	  {
               	    ob[i].disp();
               	     
				  }
			   }
               break;
         case 3:cout<<"exit the programme";
        exit(0);
         break;
    }
     }while(ch!=3);
}

