#include<iostream>

using namespace std;

class Largest
{
    private:
            int X,Y,Z,Max;

    public:
            void Inpute()
            {
                cout<<"Enter First Number";
                cin>> X ;
                cout<<"Enter Second Number";
                cin>>Y;
                cout<<"Enter Third Number";
                cin>>Z;
            }
            void Calculation()
            {
                Max = X;

                if(Max < Y)
                {
                    Max = Y;
                }

                cout<<"Largest Number is :"<<Max<<endl;

            }
};
int main()
{
    Largest L;
    L.Inpute();
    L.Calculation();

    return 0;

}
