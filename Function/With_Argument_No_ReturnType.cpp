#include<iostream>
using namespace std;
void sum(int a,int b)
{

    int res = a+b;
    cout<<res;

}

int main()
{
     int x=0, y=0;
   cout<<"Enter First Number: ";
   cin>> x;

   cout<<"Enter second Number: ";
   cin>>y;

   sum(x,y);
   return 0 ;
}


