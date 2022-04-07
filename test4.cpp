#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    //cout<<"1\n";
    for(int i=1;i<=a;i++){
        //cout<<"i="<<i<<endl;
        if(a%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    int i=1;
    do
    {
        if(a%i==0){
            cout<<i<<" ";
        }
        i++;
    } while (i<=a);
    
    //cout<<a;
}