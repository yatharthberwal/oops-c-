#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int age[5];
    cout<<"Enter your age\n";
    
    for(int i=0;i<=4;i++){
        cin>> age[i];
    }
    for(int i=4;i>=0;i--){
        cout<< age[i] <<" "; 
    }
}