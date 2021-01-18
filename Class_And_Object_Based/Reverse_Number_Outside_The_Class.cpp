#include<iostream>

using namespace std;

class Reverse
{
    private:
            int No , Temp ,rem ,Rev;

    public:
            void Accept();
            void Calculation();
            void Display();

};
void Reverse :: Accept()
{
    cout<<" Enter A Number : ";
    cin>> No;
}
void Reverse :: Calculation()
{
    Temp = No;
    Rev = 0;

    while(Temp > 0)
    {
        rem = Temp % 10;
        Rev = Rev *10 + rem ;
        Temp /= 10;
    }
}
void Reverse :: Display()
{
    cout<<"Reverse Number is :" << Rev;
}

int main()
{
    Reverse R;
    R.Accept();
    R.Calculation();
    R.Display();

    return 0;

}

