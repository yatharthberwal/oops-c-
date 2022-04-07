#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int age[6];
    cout<<"enter your age\n";
    for(int i=0;i<=5;i++){
        cin>>age[i];
    }
    for(int i=0;i<=5;i++){
        cout<<age[i]<<" ";
    }
    //cout<<&age[0]<<" "<<&age[1]<<endl;
}