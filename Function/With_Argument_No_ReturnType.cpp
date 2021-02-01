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
   cout<<"enter first number: ";
   cin>> x;

   cout<<"enter second number: ";
   cin>>y;

   sum(x,y);
   return 0 ;
}


