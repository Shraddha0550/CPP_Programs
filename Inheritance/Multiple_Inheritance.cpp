/// In main only Access Public Access Specifier

#include<iostream>

using namespace std;

class Base
{
    private:
            int i ;

    protected:
            int j ;

    public:
            int k;
};
class Base1
{
     private:
            int p ;

    protected:
            int q;
    public:
            int r;

};
class Derived : public Base ,public Base1
{

     private:
            int X ;

    protected:
            int Y;
    public:
            int Z;

            void get_Data()
            {
                q = 100;
                r = 120;
                j = 220;
                k = 0;
                 cout<<q<<endl;
                cout<<r<<endl;
                 cout<<j<<endl;
                cout<<k<<endl;
            }
};
int main()
{
        Derived Dobj ;
        Dobj.get_Data();

}
