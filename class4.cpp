#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    int i=1;
    while(i<=10){
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
        i++;
    }
    for(int j=1;j<=10;j++){
        cout<<a<<" x "<<j<<" = "<<a*j<<endl;
    }
   

}