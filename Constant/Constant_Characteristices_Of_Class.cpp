#include<iostream>
using namespace std;

class My_Variable
{
    public :

        int i , j ,p;
        const int k;

        My_Variable():k(10),p(3)                      // member initialization list
        {
            cout<<"Inside Default Constructor"<<endl;

            cout<<k<<endl;
            cout<<p<<endl;
        }
        My_Variable(int x,int y):k(10),i(x),j(y)
        {
            cout<<"Inside parameterized Constructor"<<endl;
        }

};


int main()
{

    cout<<"Inside Main"<<endl;

     My_Variable obj1;
     My_Variable obj2(10,20);

    cout<<obj2.i<<endl;
    cout<<obj2.j;

    return 0;
}
