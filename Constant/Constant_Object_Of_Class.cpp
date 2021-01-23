#include<iostream>
using namespace std;

class My_Variable
{
    public :

        int i;

        My_Variable()
        {
            cout<<"Inside default Constructor"<<endl;
            i = 10;
        }

        void show(int z)
        {
            int p = 10;
            i = z;
            p++;
        }
        void gun(int k) const
        {
            int p = 10;
            p++;
        }

};
int main()
{

    cout<<"Inside Main"<<endl;

    My_Variable obj1;
    const My_Variable obj2;


    obj1.i++;
    obj1.show(10);
    obj1.gun(101);
    obj2.gun(101);
    return 0;


}
