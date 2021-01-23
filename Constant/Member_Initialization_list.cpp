#include<iostream>
using namespace std;

class My_Variable
{
    public :

        int i , j ,p;

        My_Variable():p(3)                      // member initialization list
        {
            cout<<"Inside Default Constructor"<<endl;

            cout<<p<<endl;
        }
        My_Variable(int x):j(++x), i(x)
        {
            cout<<"Inside parameterized Constructor"<<endl;
        }
        ~My_Variable()
        {
            cout<<"Inside Destructor"<<endl;

        }

};


int main()
{

    cout<<"Inside Main"<<endl;

     My_Variable obj1;
     My_Variable obj2(10);

     cout<<obj2.i<<endl<<obj2.j;

    return 0;
}
