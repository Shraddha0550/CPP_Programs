#include<iostream>
using namespace std;

class My_Variable
{

    public :

             int i , j ;
             int p ;
             const int k = 11;

             My_Variable()
             {
                 cout<<"Inside Default Constructor"<<endl;


                  p = 90;
                  cout<<p<<endl;
             }
              ~My_Variable()
             {
                 cout<<"Inside Destructor "<<endl;
             }
              My_Variable(int x,int y)
             {
                 cout<<"Inside parameterized Constructor"<<endl;
                 i = x;
                 j = y;

             }
             void show()
             {
                   cout<<"Constant Variable is : "<<k<<endl;

             }

};


int main()
{

    cout<<"Inside Main"<<endl;

    My_Variable obj1;
    My_Variable obj2(10,20);

    obj1.show();
    cout<<obj2.i<<endl;
    cout<<obj2.j;

    return 0;
}
