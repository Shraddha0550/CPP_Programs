#include<iostream>

using namespace std;

class Number
{
    private:
            int Val1  ;
            double val2;

    public:

        Number();

        Number(int a)
        {
            Val1 = a;
            val2 = 0;
        }
         Number(double b)
        {
            Val1 = 0;
            val2 = b;
        }
         Number(int c, double d)
        {
            Val1 = c;
            val2 = d;
        }
        void show()
        {
            cout<<"value of Val1 :"<<Val1<<endl;
            cout<<"value of val2:"<<val2<<endl;
        }

        ~Number();
};

Number :: Number()
{
    cout<<"Inside Constructor"<<endl;
}
Number :: ~Number()
{
    cout<<"Inside Destructor"<<endl;
}

int main()
{
        Number obj1(2);
        Number obj2(2.2);
        Number obj3(3,5.5);
        obj1.show();
        obj2.show();
        obj3.show();

}
