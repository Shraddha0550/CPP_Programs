#include<iostream>

using namespace std;

class Base
{


     public:
        int x = 5;
        virtual void show()
        {
            cout<<" Inside Base :: show "<<x<<endl;
        }
};
class Derived : public Base
{
     int y = 10;
     public:


        void show()
        {
            cout<<" Inside Derived :: show "<<x<<endl;
        }
};
int main()
{
        Base *ptr ;
        Derived  derive;
        Base base;

        ptr = &derive;
        ptr ->show();

        ptr = &base;
        ptr ->show();


        return 0;
}
