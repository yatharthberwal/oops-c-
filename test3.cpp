#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int x,y;
    cout<<"enter the numbers\n";
    cin>>x>>y;
    if (x%y==0)
    {
        cout<<y<<" is a factor of "<<x<<endl;
    }
    else{
        cout<<y<<" is not a factor of "<<x<<endl;
    }
}