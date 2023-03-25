#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size, int max)
{
    for(int i = 0; i<size; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    return max; 
 
}
int main()
{
    int arr[10] = {1,5,2,9,6,4,8,3,7,0};
   
    int max = INT_MIN,size = 10;
    max=findMax(arr, size, max);
    cout<<"Maximum number in Array: "<<max<<endl;
}
