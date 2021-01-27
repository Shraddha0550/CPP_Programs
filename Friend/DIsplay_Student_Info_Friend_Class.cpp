#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
    private:
            int ROll_No;
            char Name[20];
            static int ID;


    public:
            void Accept_Details();
            void Dispaly_Details();
            friend void Search(int);

}s[3];
int Student :: ID = 1;

void Student :: Accept_Details()
{
    ROll_No = ID;
    cout<<"Enter Student Roll Number :"<< ROll_No<<endl;

    cout<<"Enter Student Name :";
    cin>>Name;

    ID++;


}

void Student :: Dispaly_Details()
{

    cout<<"\n Student Roll Number :"<<ROll_No;

    cout<<"\n  Student Name :"<<Name<<endl;
}
void Search(int id)
{
    cout<<"\n ======** Search Student Details By ID " << id <<"**======\n";
    cout<<"\n Enter Student Roll Number :"<<s[id - 1].ROll_No;

    cout<<"\n Enter Student Name :"<<s[id - 1].Name<<endl;
}

int main()
{
    int i = 0 , ID = 0;
    char Choice = '\0';
    for(i = 0 ; i <= 3 ;i++)
    {
         s[i].Accept_Details();
    }
    cout<<"\n ======** Student Details **======\n";
    for(i = 0 ; i <= 3 ;i++)
    {
         s[i].Dispaly_Details();
    }
    up:
    cout<<endl<<"You Want Search Student [Y/N]:"<<;
    cin>>Choice;

    if(Choice == 'Y' || Choice == 'y' )
    {
        cout<<endl<<"Enter ID To Search Student:";
        cin>>ID;

        Search(ID);
        goto up;
    }

    cout<<"Thanks";

}
