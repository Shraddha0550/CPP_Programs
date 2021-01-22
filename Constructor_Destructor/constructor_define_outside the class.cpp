#include<iostream>
using namespace std;
class constructor
{
    public:
        int num;
        string name;


    constructor(int x,string y);

};
constructor::constructor(int x,string y)
{
        num = x;
        name=y;
}
int main()
{

   constructor obj2(20,"pooja");


   cout<< obj2.num<<endl;
   cout<< obj2.name;

}
