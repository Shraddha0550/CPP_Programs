#include<iostream>

using namespace std;

class Base
{


     public:
        int x = 5;
        void show()
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
            Base :: show();
            cout<<" Inside Derived :: show "<<x<<endl;
        }
};
int main()
{

        Derived  derive;
        derive.show();
       // derive.Base::show();

        /*Base obj;
        obj.show();*/

        return 0;
}
