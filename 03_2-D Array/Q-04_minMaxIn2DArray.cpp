#include<bits/stdc++.h>
using namespace std;

pair<int,int> minMax(int arr[][3], int row, int col){
  pair<int,int> p;
  int min = INT_MAX;
  int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          if(arr[i][j] < min){
            min = arr[i][j];
          }
          else if(arr[i][j] > max){
            max = arr[i][j];
          }
              
        }
      
    }
    p.first = min;
    p.second =max;
    return p;

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

pair<int,int> p;
p=minMax(arr, row, col);


cout<<"Minimum element is: "<<p.first<<endl;
cout<<"Maximum element is: "<<p.second<<endl;
return 0;
}