#include<iostream>

using namespace std;

class Sum_Odd_No
{
    private:

        int Sum = 0, i;

    public:
        void Accept()
        {
            for(i = 1 ; i <= 100 ; i += 2);
            Sum += i;
        }
        void Display()
        {
            cout << "Sum Of Odd Number is : " << Sum ;
        }
};
int main()
{
    Sum_Odd_No s;
    s.Accept();
    s.Display();
}
