#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v{1,2,3,4,5,6,7,8,9}; 
   int arr[] = {1,2,3,4,5,6};
    int size= 6;
   if(binary_search(v.begin(), v.end(), 8)){
    cout<<"Found"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }


   if(binary_search(arr, arr+size, 8)){
    cout<<"Found"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }
}