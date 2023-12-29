//sum of heights and average.
#include<iostream>
using namespace std;
class student{
    public:
    float height;
    void accept(){
        cout<<"enter height";
        cin>>height;
    }
};
int main()
{
    int i,n;
    float s,a;
    cout<<"enter limit";
    cin>>n;
    student ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].accept();
    }
    for(i=0;i<n;i++)
    {
        s=s+ob[i].height;

    }
    a=s/n;
    cout<<"average of height"<<a;
    cout<<"sum of heights"<<s;
}