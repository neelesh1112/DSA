//Find Unique Element

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements: ";
    vector<int>arr(n);
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUniqueElement(arr);
    cout<<"Unique Element is "<<uniqueElement;

    return 0;
}