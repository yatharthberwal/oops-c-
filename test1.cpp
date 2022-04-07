#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    float maths,science;
    cout<<"enter your maths marks\n";
    cin>>maths;
    cout<<"enter your science marks\n";
    cin>>science;
    float total;
    total=(maths+science)/2;
    if(total>=90){
        cout<<"congurates you had won 1000Rs\n";
    }
    else if(total>=80&&total<90){
        cout<<"congrates you had won 750Rs\n";
    }
    else if(total>=70&&total<80){
        cout<<"congurates you had won 500Rs\n";
    }
    else{
        cout<<"better luck next time\n";
    }
}