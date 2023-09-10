// Count the frequency of character into a string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter a string."<<endl;
    string s;
    cin>>s;


    // If lower and upper case are mixed
    int hash[256] = {0};  // 256 bcz at max character can have 256
    for(int i=0; i<s.size(); i++){
        hash[s[i]]+=1;
    }


    //  // If only lower  case are there into string
    // int hash[26] = {0};  
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i] - 'a']+=1;
    // }


    // // If only Upper  case are there into string
    // int hash[26] = {0};  
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i] - 'A']+=1;
    // }


    cout<<"Enter a character to check the frequency of that character."<<endl;

    char ch;
    cin>>ch;



     // If lower and upper case are mixed
     cout<<"Frequency of "<<ch<< " is: "<<hash[ch] <<endl;



    //  // If only lower  case are there into string
    // cout<<"Frequency of "<<ch<< " is: "<<hash[ch-'a'] <<endl;



    // // If only Upper  case are there into string
    // cout<<"Frequency of "<<ch<< " is: "<<hash[ch-'A'] <<endl;

    return 0;
}