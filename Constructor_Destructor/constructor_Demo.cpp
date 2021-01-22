#include<iostream>
using namespace std;
class myclass
{

    public:
        int i,j;


    myclass()
    {
        cout<<"inside the default constructor"<<endl;
        i=0;
        j=0;
    }
    myclass(int N1,int N2)
    {
        cout<<"inside the parameterized constructor"<<endl;
        i=N1;
        j=N2;
    }
    myclass(myclass & ref)
    {
        cout<<"inside the copy constructor"<<endl;
        i=ref.i;
        j=ref.j;
    }
    void display()
    {
        cout<<"the value of i :"<<i<<endl;
        cout<<"the value of j :"<<j<<endl;
    }
    void fun()
    {
        cout<<"inside member function"<<endl;
    }

};
int main()
{

    myclass obj1;
    obj1.display();

    myclass obj2(10,20);
    obj2.display();

    myclass obj3(obj2);
    obj3.display();
}
