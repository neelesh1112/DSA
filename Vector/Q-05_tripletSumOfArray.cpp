#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,sum, flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the "<<n<<" elements in array: ";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<"Triplet of all elements:"<<endl;
      for(int i =0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl; 
            } 
        }
    }
    cout<<"Enter a element to check pair sum:";
    cin>>sum;

    // pair<int, int> p;
    cout<<"This is the pair in the who's sum is "<<sum<<"  -->"<<endl;
    for(int i =0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;    
                }
            } 
        }
    }
}