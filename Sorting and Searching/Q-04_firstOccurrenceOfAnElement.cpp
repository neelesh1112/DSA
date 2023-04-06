#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>array, int target){
    int start = 0;
    int end = array.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(array[mid] == target){
            ans = mid;
            end  = mid-1;
        }
        if(array[mid] < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
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
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    vector<int>arr(n);
    // cout<<"Enter "<<n<<" emelents into an arrya: "<<endl;
    vector<int> array = takeInput(n);
    int target;
    cout<<"Enter a target element: "<<endl;
    cin>>target;
    int index = firstOccurrence(array,target);
    if(index != -1)
    cout<<"First Occurrence of "<<target<<" is at "<<index<<" index."<<endl;
    else
    cout<<"Element is not present in array.";
}
