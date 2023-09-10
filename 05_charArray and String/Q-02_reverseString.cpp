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

void reverseString(char ch[]){
    int end = getLength(ch) -1;
    int start = 0;
    while(start <= end){
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

int main(){
    char ch[100];
    cout<<"Enter yout String: "<<endl;
    cin.getline(ch,100);
    cout<<"Your String is -> "<<ch<<endl;
    reverseString(ch);
    cout<<"Reverse of yout String -> "<<ch<<endl;

}