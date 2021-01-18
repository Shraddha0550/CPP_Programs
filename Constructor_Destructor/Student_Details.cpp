#include<iostream>

using namespace std;

class Student
{
    private:
            int Roll_No ;
            char Name[20];

    public:
            Student();
            void Accept();
            void Display();
            ~Student();
};
void Student :: Accept()
{
    cout<<"Enter Student Roll Number :";
    cin>>Roll_No;
    cout<<"Enter Student Name :";
    cin>>Name;
}
void Student :: Display()
{
    cout<<" Student Roll Number :"<<Roll_No<<endl;

    cout<<" Student Name :"<<Name<<endl;

}
Student :: Student()
{
    cout<<"Student Information"<<endl;
}
Student :: ~Student()
{
    cout<<"Bye Bye"<<endl;
}

int main()
{
   Student obj ;
   obj.Accept();
   obj.Display();

}
