#include<iostream>
#include<string.h>
using namespace std;


//Find Length
// int getLength(char ch[]){
//     int l=0;
//     int i=0;
//     while(ch[i] != '\0'){
//         l++;
//         i++;
//     }
//     return l;
// }

void replaceSpace(char ch[]){
    //int end = getLength(ch) -1;

    for(int i=0; i<strlen(ch); i++){
        if(ch[i] == ' '){
            ch[i] = '@';
        }
    }
    
}

int main(){
    char ch[100];
    cout<<"Enter yout String: "<<endl;
    cin.getline(ch,100);
    cout<<"Your String is -> "<<ch<<endl;
    replaceSpace(ch);
    cout<<"After Removing spaces -> "<<ch<<endl;

}