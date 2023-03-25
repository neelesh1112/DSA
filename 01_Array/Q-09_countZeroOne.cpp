// Count 0's and 1's in array

#include<bits/stdc++.h>
using namespace std;
pair<int ,int > countZeroAndOne(int arr[], int size, int countOne, int countZero)
{
    pair<int ,int > p;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        countZero++;
        else if(arr[i]==1)
        countOne++;
        
    }

    p.first = countOne;
    p.second = countZero;

    return p;
}
int main()
{
    pair<int ,int > p;
    int arr[15] = {0,1,2,1,1,1,0,8,0,4,1,1,0,5,1};
    int size = 15;
    int countOne =0, countZero = 0;
    p = countZeroAndOne(arr, size, countOne, countZero );

    
    cout << p.first << " ";
    cout << p.second << endl;
    
}