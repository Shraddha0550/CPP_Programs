#include<iostream>
using namespace std;

template <typename T>

class Addition
{
    public:
            T x;
            T y;
            T Sum;

            Addition(T p , T q)
            {
                x = p;
                y = q;

                Sum = (x + y);

                cout<< "Addition of" << x <<"And "<< y << "is :" << Sum <<endl;
            }
};

int main()
{
    Addition <int>obj1(10,20);
    Addition <float>obj2(1.1,2.3);

    return 0;
}
