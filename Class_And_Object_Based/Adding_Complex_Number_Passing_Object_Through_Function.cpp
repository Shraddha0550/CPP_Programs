#include<iostream>

using namespace std;

class Complex
{
    private:
            int Re , Im , Comp;


    public:
         void Get()
        {
            cout << "Enter Real Number" ;
            cin >> Re ;
            cout << "Enter Image. Number" ;
            cin >> Im;


        }
        void Set()
        {
             cout << Re << "+" << Im << "i";
        }

};

int main()
{
    Complex C1,C2,C3;
    cout << "Enter First Complex Number " << endl ;
    C1.Get();

    cout << "Enter Second Complex Number " << endl;
     C2.Get();

     cout << "First Complex Number is" << endl;
     C1.Set();

      cout << "Second Complex Number is" << endl;
     C2.Set();

    return 0;

}

