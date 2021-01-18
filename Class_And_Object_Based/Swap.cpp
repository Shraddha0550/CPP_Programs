#include<iostream>

using namespace std;

class Swap
{
    private:

        int N1 = 0 , N2 = 0 , Temp = 0;

    public:
        void Accept();
        void Swap_No();
        void Display();
};
void Swap ::Accept()
{
    cout << "Enter Two Numbers :";
    cin>> N1 >> N2;
}
void Swap ::Swap_No()
{
    Temp = N1 ;
    N1 = N2;
    N2 = Temp ;

}
void Swap :: Display()
{
    cout << "After Swapping " << endl;
    cout << "a =  " << N1 << " b = " << N2 ;
}
int main()
{
    Swap s;
    s.Accept();
    s.Swap_No();
    s.Display();
}
