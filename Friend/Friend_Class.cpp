#include<iostream>

using namespace std;

class Hello
{
    public:
            float salary;


             void Fun();

};

class Demo
{

    private:
           int i ;
    public:
             int age;

             Demo()
             {
                 i = 2;
                 age = 21;

             }

     friend class Hello;

};

void Hello ::Fun()
{
    Demo D;
    cout<<"inside fun"<<endl;
    cout<<D.i<<endl;
}

int main()
{
    Hello h;
    h.Fun();


}

