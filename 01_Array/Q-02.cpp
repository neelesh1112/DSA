#include <iostream>
using namespace std;
void main()
{
    // Array Initialization (Static Initiase- mean fixed size)

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr3[10] = {1,2,3,4,5};  // Remainig 5 block of memory(Each 4byte) will store 0 (Zero)
    //int arr4[4] = {1,2,3,4,5}; // error: too many initializers for 'int [4]'


    //Bad Practice for declaration of size of array
    int n;
    cin>>n;
    int arr[n];
}