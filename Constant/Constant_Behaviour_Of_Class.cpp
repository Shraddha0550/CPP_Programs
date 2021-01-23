#include<iostream>
using namespace std;

class My_Variable
{
    public :

        int i;

        My_Variable(int x)
        {
            cout<<"Inside parameterized Constructor"<<endl;
            i= x;
        }
        void show()
        {
            int p = 10;
            i++;
            p++;
        }
        void gun() const             ///constant behavior of class
        {
            int p = 10;
            p++;
        }
};


int main()
{

    cout<<"Inside Main"<<endl;

     My_Variable obj(10);

     cout<<obj.i;
     obj.gun();
     obj.show();

    return 0;
}
