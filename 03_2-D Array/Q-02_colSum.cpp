#include<bits/stdc++.h>
using namespace std;

void colSum(int arr[][3], int row, int col){
    cout<<"Column wise sum: "<<endl;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum=sum+arr[j][i];
           
        }
        cout<<sum<<endl;
    }
}

void printMatrix(int arr[][3], int row, int col){
    cout<<"Your 2-D array is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
int arr[3][3];
int row=3, col=3;

cout<<"Enter element: "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}
printMatrix(arr, row, col);
colSum(arr, row, col);

    return 0;
}