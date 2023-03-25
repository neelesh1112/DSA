#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Declare 2D Array
    int arr[3][3];

    // Declaration and initialisation
    int brr[3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}
        };

    // Access element
    cout<<brr[0][2]<<endl;
    cout<<brr[2][2]<<endl;
    cout<<brr[0][1]<<endl;

    cout<<"Printing element Row Wise"<<endl;
    // Access by row/ Print element by row
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing element Column Wise"<<endl;
// Access by column/ Print element by column
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }



// ***** User Input ******


//Row Wise
int crr[4][3];
int r=4;
int c=3;

// Take input in row wise
cout<<"Enter elements: "<<endl;
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>crr[i][j];
    }
}


cout<<"Printing Row Wise: "<<endl;
for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}


//Column Wise
int drr[3][3]; //Should be square matrix
int row=3;
int col=3;
// Take input in column wise
cout<<"Enter elements: "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>drr[j][i];
    }
}


cout<<"Printing column Wise: "<<endl;
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<drr[i][j]<<" ";
    }
    cout<<endl;
}
}

