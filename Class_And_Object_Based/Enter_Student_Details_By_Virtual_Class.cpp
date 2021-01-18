#include<iostream>

using namespace std;

class Student_Details
{
    protected:
            int Roll_No;


    public:
            void get_No(int Num)
            {
                Roll_No = Num;
            }
            void put_No()
            {
                cout<<"Student Roll Number is :" << Roll_No << endl;
            }
};
class Test : virtual public Student_Details
{
     protected:
           float Sub_Marks;

    public:
            void get_SubMarks(float Marks)
            {
                Sub_Marks = Marks;
            }
            void put_SubMarks()
            {
                cout<<"Student Subject Marks is :" << Sub_Marks << endl;
            }
};
class Sport : virtual public Student_Details
{
    protected:
           float Sport_Marks;

    public:
            void get_SpMarks(float Marks)
            {
                Sport_Marks = Marks;
            }
            void put_SpMarks()
            {
                cout<<"Student sports Marks is :" << Sport_Marks << endl;
            }
};
class Result : public Sport , public Test
{
    float Total_Marks;

    public:
            void get_Result()
            {
                Total_Marks = Sport_Marks + Sub_Marks;
                put_No();
                put_SubMarks();
                put_SpMarks();

                cout<<"Total Marks Are :" << Total_Marks;
            }

};
int main()
{
    Result R;
    R.get_No(5);
    R.get_SubMarks(88.90);
    R.get_SpMarks(70.67);
    R.get_Result();
}
