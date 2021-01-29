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

     friend void Hello :: Fun();

};

void Hello :: Fun()
{
    Demo D;
     cout<<"Inside Fun"<<endl;
     cout<<D.i<<endl<<D.age;
}

int main()
{
    Hello h;
    h.Fun();

}
