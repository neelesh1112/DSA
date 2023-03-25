#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int size, int min)
{
    for(int i = 0; i<size; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    return min; 
 
}
int main()
{
    int arr[10] = {1,5,2,9,6,4,-8,3,7,0};
    int min = INT_MAX,size = 10;
    cout<<"Maximum number in Array: "<<findMin(arr, size, min)<<endl;
}
