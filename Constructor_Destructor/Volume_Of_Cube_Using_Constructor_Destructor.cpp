#include<iostream>
using namespace std;

class Cube
{
    public:
    int ret ;
    Cube()
    {
        cout<<"Inside Default Constructor"<<endl;
    }
    Cube(int Side)
    {
        cout<<"Inside Parameterized Constructor"<<endl;
        ret = Side * Side * Side;
        cout<<" Volume Of Cube "<< ret <<endl;
    }
    ~Cube()
    {
        cout<<"Inside Destructor"<<endl;
    }
};

int main()
{
    Cube obj1;
    Cube obj2(12);
}
