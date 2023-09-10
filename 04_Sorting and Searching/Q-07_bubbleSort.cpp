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
        bool swapped = false;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    }