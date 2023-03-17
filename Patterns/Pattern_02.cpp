#include<iostream>
using namespace std;
int main()
{
    int row=4, col=4;
    for(int i=0; i<4; i++)
    {
        for(int j=4; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}