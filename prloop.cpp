#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int maths[5],science[5];
    cout<<"Enter your maths marks\n";
    
    for(int i=0;i<=4;i++){
        cin>> maths[i];
    }
    cout<<"Enter your science marks\n";

    for(int m=0;m<=4;m++){
        cin>> science[m];
    }
    cout<<"Your percentage is\n";
    for(int i=0;i<5;i++){
        cout<<(maths[i]+science[i])/2<<" ";
    }
    cout<<endl;

}