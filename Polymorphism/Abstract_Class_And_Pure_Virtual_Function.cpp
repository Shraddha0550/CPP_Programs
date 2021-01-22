#include<iostream>

using namespace std;

class Base
{


     public:
        int x = 5;
        virtual void show() = 0;

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

        ptr = &derive;
        ptr ->show();

        return 0;
}
