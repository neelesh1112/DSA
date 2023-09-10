// #include <iostream>
// using namespace std;
// int main(){
//      char name[100];
//      cout<<"Enetr your name: ";
//      cin>>name;
//      cout<<"Apka name "<<name<<" hai.";

// }




// #include <iostream>
// using namespace std;
// int main(){
//      char name[100];
//     name[0] = 'N';
//     name[1] = 'e';
//     name[2] = 'e';
//     cin>>name[3];
    
//     //cout<<"Apka name " <<name<<" hai.";
//     cout<<name[0]<<name[1]<<name[2]<<name[3];

// }



// #include <iostream>
// using namespace std;
// int main(){
//      char name[4];
//     for(int i=0; i<4; i++){
//         cin>>name[i];
//     }
//     //cout<<name;
//     for(int i=0; i<4; i++){
//         cout<<name[i];
//     }
// }






// *********** Last index carry thbe null character '/0' which indicate the end of the string.********
// ASCII value of Null character is 0.


// #include <iostream>
// using namespace std;
// int main(){
//      char name[100];
//      cout<<"Enter Your Name: ";
//     cin>>name;
//     //cout<<name;
//     for(int i=0; i<8; i++){
//         cout<<"index: " <<i << " Value: "<<name[i]<<endl;;
//     }
// }




//Get input with space

// #include <iostream>
// using namespace std;
// int main(){
//      char name[100];
//      cout<<"Enter Your Name: ";
//      cin.getline(name,50);
//      cout<<name;
   
// }





// *****  find length of string  *******


#include <iostream>
using namespace std;
#include<string.h>
int getlength(char name[]){
     int l = 0;
     int i = 0;
     while(name[i] != '\0'){
          l++;
          i++;
     }
     return l;
}
int main(){
     char name[100];
     cout<<"Enter Your Name: ";
     cin.getline(name,50);

     //With user define Function
     cout<<"Length of your name "<<getlength(name)<<endl;

     //Without user define function
     cout<<"Length of your name "<<strlen(name)<<endl;
   
}