#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr;
    vector<int>  a{1,2,3,4,5};
    vector<int>  b{6,7,8,9,0};
    vector<int>  c{5,4,3,2,1};
    vector<int>  d{0,9,8,7,6};
    vector<int>  e{0,0,0,0,0};
    
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    arr.push_back(e);

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}