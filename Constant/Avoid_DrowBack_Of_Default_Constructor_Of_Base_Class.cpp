#include<iostream>
using namespace std;

class Base
{
    public:
            int i,j;

            Base(int x,int y)
            {
                cout<<"inside Parameterized Constructor"<<endl;
                i = x;
                j = y;
            }
            ~Base()
            {
                cout<<"Inside Destructor"<<endl;"
            }

};
class Derived : public Base
{
    public:
        int x;

        Derived() : Base(10,20)
        {
             cout<<"inside Default Constructor"<<endl;
             x = 11;
        }
        ~Derived()
        {
            cout<<"Inside Destructor"<<endl;"
        }
};
int main()
{

    Derived dobj;
}
