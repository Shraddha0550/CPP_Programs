#include<iostream>
using namespace std;

template <typename T>

class Addition
{
    public:

            T Sum;

             Addition()
             {
                 cout<<"Inside Default Constructor"<<endl;
             }

            T Fun(T p , T q)
            {

                Sum = p + q;

                cout<< "Addition of" << p <<"And "<< q << "is :" << Sum <<endl;
            }
};

int main()
{
   Addition <int>obj;
   Addition <float>obj1;
   obj.Fun(10,20);

   obj1.Fun(1.1,2.3);

    return 0;
}
