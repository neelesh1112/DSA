#include<iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {1,4,6,7,2};
    int n, size =5;
    cout<<"Enter the Key you want to find: ";
    cin>>n;
    if(find(arr, size, n))
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}