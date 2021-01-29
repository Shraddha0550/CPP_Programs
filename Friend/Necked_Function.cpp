#include<iostream>

using namespace std;

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

     friend void Fun();

};

void Fun()
{
    Demo D;
     cout<<"Inside Fun"<<endl;
     cout<<D.i<<endl<<D.age;
}

int main()
{
    Fun();
    return 0;
}

