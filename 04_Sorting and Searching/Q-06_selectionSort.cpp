#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" element into array."<<endl;
    vector<int> arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    for(int i=0; i<arr.size()-1; i++){
        int minIndex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
        
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    }