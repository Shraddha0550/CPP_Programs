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

};

inline void Square :: Accept()
{
    cout << "Enter Integer Value :";
    cin >> No1;
     cout << "Enter Float Value :";
    cin >> No2;


}
inline void Square :: Calculation()
{
    s1 = No1 * No1;
    s2 = No2 * No2;

}
inline void Square :: Display()
{
    cout << "Square Of Integer Value is :" << s1 << endl;
    cout << "Square Of Float Value is :" << s2 << endl;

}
int main()
{
    Square sq;
    sq.Accept();
    sq.Calculation();
    sq.Display();

    return 0;

}
