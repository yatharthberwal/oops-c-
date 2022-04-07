#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    char ms;
    int ma,fa;
    cout<<"enter the age of bride\n";
    cin>>fa;
    cout<<"enter the age of groom\n";
    cin>>ma;
    cout<<"enter your marital status\n";
    cin>>ms;
    if(ms=='y'||ms=='Y'){
        if(ma>=21&&fa>=21){
            cout<<"your are under given circumstances\nhave a happy married life\n";
        }
        if(ma<21||fa<21){
            cout<<"your were not eligible for marriage\n";
        }
    }
    if(ms=='n'||ms=='N'){
        if(ma>=21&&fa>=21){
            cout<<"your are eligible for marriage\n";
        }
        if(ma<21||fa<21){
            cout<<"your are not eligible for marriage wait for the rigth time\n";
        }
    
    }

}