#include<iostream>

using namespace std;

class counter
{
    private:
            int Count ;

    public:
            counter()
            {
                Count = 0;
            }

            int inc_Cnt()
            {
                Count++;
            }
            int getData()
            {
                return Count;
            }

};

int main()
{
     counter obj;
     cout<<"value of Count:"<<obj.getData()<<endl;
     obj.inc_Cnt();
     cout<<"value of Count:"<<obj.getData();

}
