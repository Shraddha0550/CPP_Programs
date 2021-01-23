#include<iostream>
using namespace std;

class My_Demo
{
    public:
            mutable int i ;
            My_Demo()
            {
                i = 20;
                cout<<"My_Demo :: Constructor"<<endl;
            }
           ~My_Demo()
            {
                cout<<"My_Demo :: Destructor"<<endl;
            }
            void show()const
            {
                cout<<"Value Of I = "<< i<<endl;
            }


};

int main()
{
    My_Demo obj ;
    obj.i++;
    obj.show();
    const My_Demo obj2;
    obj2.i++;
    obj2.show();

}
