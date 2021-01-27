#include<iostream>
using namespace std;

class Demo
{
    public:

        int p = 10;
        static int l ;
        void Fun()
        {
            int i = 20;
            cout<<i<<endl;
            cout<<p<<endl;
            cout<<l<<endl;
        }
        static void Gun()
        {
            int k = 30;
             cout<<k<<endl;
             cout<<l<<endl;
        }

};
int Demo::l = 11;
int main()
{
     Demo obj1;
     Demo obj2;

     obj1.Fun();
     obj1.Gun();

     obj2.Fun();
     obj2.Gun();



}
