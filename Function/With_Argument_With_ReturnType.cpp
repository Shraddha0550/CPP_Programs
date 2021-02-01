#include <iostream>
#include <cmath>
using namespace std;
//Declaring the function sum
int sum(int,int);

int main(){
   int x, y;
   cout<<"Enter First Number: ";
   cin>> x;

   cout<<"Enter Second Number: ";
   cin>>y;

   int ret = sum(x,y);
   cout<<ret;
   return 0;
}
//Defining the function sum
int sum(int a, int b) {
   int c = a+b;
   return c;
}
