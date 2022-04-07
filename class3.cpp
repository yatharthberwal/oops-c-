#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int age;
    cout<<"enter your age\n";
    cin>>age;
    if(age>=18){
        cout<<"your are eligeble\n";
    }
    else if(age<18&&age>=16){
        cout<<"your are eligeble for learning\n";
    }
    else{
        cout<<"your are not eligeble\n";
    }
    switch (age)
    {
    case 18:
        cout<<"your are eligeble\n";
        break;
    
    default:
        break;
    }
}