#include<iostream>
using namespace std;

class AreaOfRectangle
{
    private:
            int lenght;
            int breadth;

    public:
            AreaOfRectangle(int,int);

            int AreaofRect()
            {
                return lenght * breadth;
            }

};
AreaOfRectangle :: AreaOfRectangle(int x, int y)
{
    cout<<"Inside Parameterized constructor"<<endl;
    lenght = x;
    breadth = y;
}
int main()
{
    AreaOfRectangle obj(10,30);
    cout<<"Area Of Rectangle :" <<obj.AreaofRect();
}
