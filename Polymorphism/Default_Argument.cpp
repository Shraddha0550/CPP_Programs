#include <iostream>
using namespace std;

int sum(int x, int y=20,int z=10)
{
   int p = x+y+z;
   return p;
}
int main()
{
   cout<<sum(1)<<endl;
   cout<<sum(1,2)<<endl;
   cout<<sum(1,2,3)<<endl;
}
