#include<bits/stdc++.h>
using namespace std;

// Binary Search
int binarySearch(vector<int>arr, int target, int resultB){
    int beg = 0;
    int end = arr.size()-1;
 
    while(beg<=end){
         int mid = beg+ (end - beg)/2;  // Find middle element of array
         if(arr[mid] == target){
            return mid;
         }

        //  Ignore left half
         else if(arr[mid] < target){
            beg  = mid+1;
         }

        //  Ingore Right Half
         else{
            end = mid-1;
         }
    }
}


// Linear Search
int linearSearch(vector<int>arr, int target, int resultL){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target){
            resultL++;
            return i;
            break;
        }
      
    }
}


// Take input
vector<int> takeInput( int size){
    vector<int>arr(size);
    cout<<"Enter "<<size<<" elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

   return arr;
}

// Main Fuction
int main(){
    int n,resultL=-1, resultB=-1;
    vector<int>array;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    array = takeInput(n);
    int target;
    cout<<"Enter a target element: "<<endl;
    cin>>target;


    // Calling Linear Search
    resultL = linearSearch(array,target,resultL);
    cout<<"Linear Search:"<<endl;
    if(resultL != -1){
        cout<<"\t Element is present at "<<resultL<<"th index."<<endl;
    }
    else{
        cout<<"\t Searched element is not present in array."<<endl;
    }

//    Calling Binary search fuction
    resultB = binarySearch(array, target, resultB);
    cout<<"Binary Search:"<<endl;
    if(resultB != -1){
        cout<<"\t Element is present at "<<resultB<<"th index."<<endl;
    }
    else{
        cout<<"\t Searched element is not present in array."<<endl;
    }
}