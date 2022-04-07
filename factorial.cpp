#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    int c=1;
    for(int i=a;i>=1;i--){
        c=c*i;

    }
    cout<<c<<endl;
}