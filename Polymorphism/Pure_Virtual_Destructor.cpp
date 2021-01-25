#include<iostream>
using namespace std;

class Base
{
    public:
           int i;
            Base()
            {
                cout<<"Base :: Constructor"<<endl;
            }
            virtual ~Base() = 0;               // pure Virtual Destructor

            void show()
            {
                i = 20;
                cout<<"i ="<<i<<endl;
            }


};
Base :: ~Base()
{
    cout<<"Base :: Destructor"<<endl;
}
class Derived : public Base
{
    public:
          Derived()
          {
              cout<<"Derived :: Constructor"<<endl;
          }
          ~Derived()
          {
              cout<<"Derived :: Destructor"<<endl;
          }

};

int main()
{

    Base *bobj = new Derived;
    bobj ->show();
    delete bobj;

    return 0;
}
