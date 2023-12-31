#include<iostream>
using namespace std;
class DEMO{
    public:
          void show()
          {
            static int a;
            a++;
            cout<<"value of a="<<a;

        }
};
int main()
{
    DEMO ob,ob1,ob2;
    ob.show();
    ob1.show();
    ob2.show();
}