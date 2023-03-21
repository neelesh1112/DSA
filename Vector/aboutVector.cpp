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