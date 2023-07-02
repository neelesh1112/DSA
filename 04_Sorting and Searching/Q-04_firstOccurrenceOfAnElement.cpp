#include<bits/stdc++.h>
using namespace std;
pair<int, int> firstOccurrence(vector<int>array, int target){
     pair<int , int>p;
    int start = 0;
    int end = array.size()-1;   
    int f = -1;
    int l=-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(array[mid] == target){
            f = mid;
            end  = mid-1;
        }
      
        if(array[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

        while(start <= end){
        int mid = start + (end - start)/2;
       
         if(array[mid] == target){
            l = mid;
            end  = mid+1;
        }
        if(array[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    p.first = f;
    p.second = l;
    return p;
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
int main(){
    pair<int , int>p;
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    // cout<<"Enter "<<n<<" emelents into an arrya: "<<endl;
    vector<int> array = takeInput(n);
    int target;
    cout<<"Enter a target element: "<<endl;
    cin>>target;
    p = firstOccurrence(array,target);
    if(p.first != -1){
        cout<<"First Occurrence of "<<target<<" is at "<<p.first<<" index."<<endl;
       
    }
    if(p.second != -1){
        
        cout<<"Last Occurrence of "<<target<<" is at "<<p.second<<" index."<<endl;
    }

    else
    cout<<"Element is not present in array.";
}
