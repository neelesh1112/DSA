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

bool checkPalindrome(char ch[]){
    //int end = getLength(ch) -1;
    int start = 0;
    int end = strlen(ch)-1;
    while(start < end){
        if(ch[start] != ch[end]){
            return false;
        }
      
       else{
            start++;
            end--;
       }
    }
     return true;
}

int main(){
    char ch[100];
    cout<<"Enter yout String: "<<endl;
    cin.getline(ch,100);
    cout<<"Your String is -> "<<ch<<endl;
    
    cout<<"Palindrome check: "<<checkPalindrome(ch);

}