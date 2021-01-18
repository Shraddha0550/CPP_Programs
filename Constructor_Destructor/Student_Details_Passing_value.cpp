#include<iostream>

using namespace std;

class Student
{
    private:
            int Roll_No ;
            char Name;

    public:
            Student(int x, char nm)
            {
                Roll_No = x;
                Name = nm;

            }
            void Display();
            ~Student();
};

void Student :: Display()
{
    cout<<" Student Roll Number :"<<Roll_No<<endl;

    cout<<" Student Name :"<<Name<<endl;
}

Student :: ~Student()
{
    cout<<"Bye Bye"<<endl;
}

int main()
{
   Student obj(5,'S') ;
   obj.Display();

}
