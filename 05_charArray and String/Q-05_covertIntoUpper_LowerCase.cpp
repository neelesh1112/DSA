#include<iostream>
#include<string.h>
using namespace std;



//Find Length
int getLength(char ch[]){
    int l=0;
    int i=0;
    while(ch[i] != '\0'){
        l++;
        i++;
    }
    return l;
}



// void convertIntoUppercase(char ch[]){
//     int j = getLength(ch);
//     int i = 0;
//     //int end = strlen(ch)-1;
//     while(i<j){
//         ch[i] = ch[i]-32;
//         //ch[i] = ch[i] - 'a' + 'A';
//         i++;
//     }
   
// }



void convertIntoLowercase(char ch[]){
    int j = getLength(ch);
    int i = 0;
    //int end = strlen(ch)-1;
    while(i<j){
        //ch[i] = ch[i]+32;
        ch[i] = ch[i] + 'a' - 'A';
        i++;
    }
}



int main(){
    char ch[100];
    cout<<"Enter yout String: "<<endl;
    cin.getline(ch,100);
    cout<<"Your String is -> "<<ch<<endl;
    // convertIntoUppercase(ch);
    // cout<<"Upper Case: "<<ch<<endl;
    convertIntoLowercase(ch);
    cout<<"Lower Case: "<<ch<<endl;

    return 0;

}