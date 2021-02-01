#include <bits/stdc++.h>
using namespace std;
class MyDemo
{
    public:
    string Name;
    int id;

    void printname();

    void printid();

};

void Geeks::printname()
{
    cout << "Name is: " << Name;
}
void Geeks::printid()
{
        cout << "Geek id is: " << id;
}
int main() {

    MyDemo obj1;
    obj1.Name = "xyz";
    obj1.id=15;

    obj1.printname();
    cout << endl;

    obj1.printid();

    return 0;
}
