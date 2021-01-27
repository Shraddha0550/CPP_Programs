#include<iostream>
#include"Extern_For_LSAGS.cpp"
using namespace std;

static int GNum = 100;           // global static

class Demo
{
    public:

        static int j ;          // local static


};
int Demo :: j = 11;          // LOcal Static initialize outside the class.
int main()
{
     cout<<Demo::j<<endl;
     cout<<GNum<<endl;
     GNum++;
     fun();
     cout<<GNum<<endl;
     cout<<EX<<endl;

}
