/// In main only Access Public Access Specifier

#include<iostream>

using namespace std;

class Base
{
    private:
            int i ;

    protected:
            int j;
            void show()
            {

            }
    public:
            int k;
};
class Derived : public Base
{
     private:
            int p ;

    protected:
            int q;
    public:
            int r;

            void fun()
            {
                j = 10;
                k = 20;
                cout<<j<<endl;
                cout<<k<<endl;

            }
};
int main()
{
    Derived obj;
   // obj.i;
    obj.k;
   // obj.show();
   obj.fun();

}
