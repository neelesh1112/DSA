#include<bits/stdc++.h>
using namespace std;

bool searchKey(int arr[][3], int row, int col,int key){
    cout<<"Status of Searched Element: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == key)
              return true;
        }
      
    }
  return false;
}

void printMatrix(int arr[][3], int row, int col, int key){
    cout<<"Your 2-D array is: "<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"You want to search: "<<key<<endl;
}

int main(){
int arr[3][3];
int row=3, col=3,key;

cout<<"Enter element: "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}
cout<<"Enter a element for searching: "<<endl;
cin>>key;
printMatrix(arr, row, col,key);
if(searchKey(arr, row, col, key)){
    cout<<"Present"<<endl;
}
else
cout<<"Not Present"<<endl;


return 0;
}