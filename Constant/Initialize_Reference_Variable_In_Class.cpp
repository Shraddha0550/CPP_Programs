#include<iostream>
using namespace std;

class My_Variable
{
    public :

        int i;
        int &Ref;

        My_Variable(int x): Ref(x)
        {
            cout<<"Inside parameterized Constructor"<<endl;
            i=20;
        }

};
int main()
{

     cout<<"Inside Main"<<endl;

     My_Variable obj(10);

     cout<<obj.i<<endl<<obj.Ref;

     return 0;


}
