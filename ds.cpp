#include <iostream>
#include <cstring>
using namespace std;
class id{
    public:
    int age;
    int roll;
    id(int age, int roll){
        this->age=age;
        this->roll=roll;
    }

};
int main()
{
    system("cls");
    id bhavya(19,21);
    id yatharth(19,17);
    cout<<"bhavya age is "<<bhavya.age<<" bhavya roll number is "<<bhavya.roll<<endl;
    cout<<"yatharth age is "<<yatharth.age<<" yatharth roll number is "<<yatharth.roll<<endl;
}