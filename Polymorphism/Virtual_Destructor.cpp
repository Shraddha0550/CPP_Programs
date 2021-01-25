// Without Virtual Keyword Can not Print Destructor of Derived.

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
            virtual ~Base()                               // Virtual Destructor
            {
                cout<<"Base :: Destructor"<<endl;
            }
            void show()
            {
                i = 20;
                cout<<"i ="<<i<<endl;
            }


};
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
