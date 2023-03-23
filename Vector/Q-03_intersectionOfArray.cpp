#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of first array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the "<<n<<" element in first array:";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }


    cout<<"Enter the size of second  array:";
    cin>>m;
    vector<int>brr(m);
    cout<<"Enter the "<<m<<" element in second array:";
    for(int i=0; i<brr.size(); i++){
        cin>>brr[i];
    }


    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j]= -1;
                ans.push_back(arr[i]);
            }
        
        }
    }


    cout<<"Intersection of both array:";

    // for(auto value: ans){
    //     cout<<value<<" ";
    // }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}