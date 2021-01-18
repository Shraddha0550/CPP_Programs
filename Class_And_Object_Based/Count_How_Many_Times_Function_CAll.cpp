#include<iostream>

using namespace std;

class Square
{
    private:
            int No1 , s1;
            float No2 , s2;


    public:
        void Accept();
        void Calculation();
        void Display();
        static int Cnt;

};
int Square :: Cnt = 0;
void Square :: Accept()
{
    cout << "Enter Integer Value :";
    cin >> No1;
     cout << "Enter Float Value :";
    cin >> No2;
    Cnt++;


}
void Square :: Calculation()
{
    s1 = No1 * No1;
    s2 = No2 * No2;
    Cnt++;
}
void Square :: Display()
{
    cout << "Square Of Integer Value is :" << s1 << endl;
    cout << "Square Of Float Value is :" << s2 << endl;
    cout << Cnt << " Times Function Call ";
}
int main()
{
    Square sq;
    sq.Accept();
    sq.Calculation();
    sq.Display();

    return 0;

}
