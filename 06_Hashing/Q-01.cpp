// Count the frequency of elemeent into an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of array."<<endl;
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" element into array."<<endl;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[100] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }
    cout<<"Enter a number to check the frequency of that number."<<endl;

    int number;
    cin>>number;
    
    cout<<"Frequency of "<<number<< " is: "<<hash[number] <<endl;

    return 0;
}