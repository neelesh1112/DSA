#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int start = 0;
    int end = size-1;
    while(start <= end)
    {
        if(start>end)
            break;

        if(start == end)
            cout<<arr[start];

        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;

    }
    return 0;
}