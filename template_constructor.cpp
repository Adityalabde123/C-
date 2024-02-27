#include<iostream>
using namespace std;
template<class T1>
class DEMO{
     public:
             DEMO(T1 a)
             {
                T1 b=a*a;
                cout<<"\n squre="<<b;
             }
};
int main()
{
     DEMO<int>ob(10);
     DEMO<float>ob1(10.3f);
     DEMO<float>ob2(10.50);

}