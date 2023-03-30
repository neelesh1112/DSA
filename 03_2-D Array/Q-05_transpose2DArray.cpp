// Transpose: covert rows into columns and columns into rows

#include<bits/stdc++.h>
using namespace std;

void printMatrix(int arr[][3], int row, int col){
   
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int transpose(int arr[][3], int row, int col, int tArray[][3]){

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        //    swap(arr[i][j], arr[j][i]);
        tArray[j][i] = arr[i][j];
        }
      
    }

  return 0;
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
cout<<"Your 2-D array is: "<<endl;
printMatrix(arr, row, col);
int tArray[3][3];
transpose(arr, row, col, tArray);
cout<<"after Transpose 2-D array is: "<<endl;
printMatrix(tArray, row, col);


return 0;
}