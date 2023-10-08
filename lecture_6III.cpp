#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int input;
    // i=1;
    // while(i<101)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }
    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input == 65)
        {
            cout<<"congrats you have guess correct"<<endl;
            break;
        }
    }
}