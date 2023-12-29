#include<iostream>
using namespace std;
class DEMO
{
    public:
    void sort(int a[100],int n)
    {
        int pass,i,t;
        for(pass=0;pass<n;pass++)
        {
            for(i=0;i<n-pass;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        cout<<"sorted array=";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
    }
    void sort(float a[100],int n)
    {
        int pass,i;
        float t;
        for(pass=0;pass<n;pass++)
        {
            for(i=0;i<n-pass;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        cout<<"\n sorted array=";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
    }
};
int main()
{
    DEMO ob;
    int a[]={11,77,33,44,55,77,44};
    float b[]={11.99,77.88,33.11,44.66,55.77,77.9,44.4};
    ob.sort(a,7);
    ob.sort(b,6);

}
