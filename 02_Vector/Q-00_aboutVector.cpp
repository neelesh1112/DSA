/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

Vector:- ○ Data Structure
         ○ Dynamic Array
         ○ Default size is '0'
         ○ If vector is fully filled and you try to insert new element, it will increase the size automatically(Double from its current size).
         ○ May be Memory loss ↑


Declare Vector:
        vector<int> arr;

Initialize vector: 
        vector<int>arr(1,2,3,4,5,6);

Cretae Vector:
        int n;
        cin>>n;
        vector<int>arr(n);

Insert Element:
        arr.push_back(5); // At the ent of array 5 will be inserted.

Delete/Remove Element:
        arr.pop_back(); // Single element will remove from end.

Check Size of Vector:
        arr.size();

Check vector is empty or not:
        arr.empty(); // Returns true or false.

***********    Check out for for  https://cplusplus.com/reference/vector/vector/      **********



*/


#include<iostream>
#include<vector>
using namespace std;
int main()
{
        vector<int> arr;

        cout<<arr.size()<<endl;  // Returns the number of elements in the vector. 
        cout<<arr.capacity()<<endl; // Returns the size of the storage space currently allocated for the vector. This capacity is not necessarily equal to the vector size. It can be equal or greater.

        // Insert
        arr.push_back(5);
        arr.push_back(6);
        cout<<arr.size()<<endl;

        //Print
        for(int i=0; i<arr.size(); i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;


        //Remove or Delete
        arr.pop_back();
        for(int i=0; i<arr.size(); i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;








        vector<int> brr(10);
        cout<< brr.size()<<endl;
        cout<<brr.capacity()<<endl;
        for(int i=0; i<brr.size(); i++)
        {
                cout<<brr[i]<<" ";
        }
        cout<<endl;








        vector<int> crr(10, 1);
        cout<< crr.size()<<endl;
        cout<<crr.capacity()<<endl;
        for(int i=0; i<crr.size(); i++)
        {
                cout<<crr[i]<<" ";
        }
        cout<<endl;






        int n;
        cin>>n;
        vector<int> drr(n, 1);
        cout<< drr.size()<<endl;
        cout<<drr.capacity()<<endl;
        for(int i=0; i<drr.size(); i++)
        {
                cout<<drr[i]<<" ";
        }
        cout<<endl;




        vector<int> err{10,20,30,40,50};
        cout<< err.size()<<endl;
        cout<<err.capacity()<<endl;
        for(int i=0; i<err.size(); i++)
        {
                cout<<err[i]<<" ";
        }
        cout<<endl;

}