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
    cout<<"Pair of all elements:"<<endl;
    for(int i =0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    cout<<"Enter a element to check pair sum:";
    cin>>sum;

    // pair<int, int> p;
    for(int i =0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == sum){
                cout<<"This is the firt pair in the who's sum is "<<sum<<"  -->"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                // flag++;
                // p.first = arr[i];
                // p.second = arr[j];

                // return p;
                break;
            }
        }
        break;
    }

    // if(flag!=0){
    //     cout<<"This is the firt pair in the who's sum is "<<sum<<"  -->"<<"("<<p.first<<","<<p.second<<")"<<endl;
    //             flag++;
    // }
    // else
    // cout<<"Pair Not Found"<<endl;

}