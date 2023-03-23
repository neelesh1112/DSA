#include<bits/stdc++.h>
#include<vector>
using namespace std;
int removeDuplicate(vector<int>ans ){
    int x = 0;
    for(int i=0; i<ans.size(); i++)
    {
        x = x^ans[i];
    }
    return x;
}
int main(){
    int n,m;
    vector<int>ans;
    cout<<"Enter the size of first Array: ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements for first array: ";
    vector<int>arr1(n);
    for(int i=0; i<arr1.size(); i++){
        cin>>arr1[i];
    }


    for(int i=0; i<arr1.size(); i++){
        ans.push_back(arr1[i]); 
    }


    cout<<"Enter the size of second Array: ";
    cin>>m;
     cout<<"Enter the "<<m<<" elements for second array: ";
    vector<int>arr2(m);
    for(int i=0; i<arr2.size(); i++){
        cin>>arr2[i];
    }
     

    
    for(int i=0; i<arr2.size(); i++){
        ans.push_back(arr2[i]); 
    }

 
    // for(int i=0; i<arr2.size(); i++){
    //     for(int j=0; i<ans.size(); j++){
    //         if(arr2[i] != ans[j]){
    //             arr2[i] = -1;
    //             ans.push_back(arr2[i]);
    //         }
    //     }
    //     break;
    // }

    cout<<"union of both of array: ";
    for(int i=0; i<ans.size(); i++){
        cout<<removeDuplicate(ans)<<" ";
    }

    return 0;
}