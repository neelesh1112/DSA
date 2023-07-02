#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> arr, int key){
    int start = 0;
    int end = arr.size();
    int mid = (start+end)/2;

    while(start <= end){
        int element = arr[mid];
        
        if(element == key){
            return mid;
        }
        else if(key < element){
            // Search left
            end = mid+1;
        }
        else{
            // Search right
            start = mid+1;
        }

        mid = (start+end)/2;
    }

    // Key not found
    return -1;
}
int main(){

    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements in array: ";
    vector<int>arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key Element: "<<endl;
cin>>key;

    int indexOfKey = binarySearch(arr,key);
    if(indexOfKey == -1){
        cout<<"Target Element is not present in array."<<endl;
    }
    else{
        cout<<"Element present at "<<indexOfKey<<"th index.";
    }
}
