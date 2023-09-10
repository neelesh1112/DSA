#include<iostream>
#include<string.h>
using namespace std;


//compare string
bool compareString( string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    else{
        int j=0;
        for(int i = 0; i<s1.length(); i++){
            if(s1[i] != s2[j]){
                return false;
            }
            j++;
        }    
    }
    return true;
}


int main(){
    string str;
    cout<<"Enter: "<<endl;
    cin>>str;
    cout<<"Your string is "<<str<<endl;
    cout<<"Length: "<<str.length()<<endl;
    cout<<"isEmpty: "<<str.empty()<<endl;
    str.push_back('Singhs'); //only push a single word (Last word 's')
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(0,3)<<endl; //str.substr(start position, length)
    

    

    string s1,s2;
    cout<<"S1: ";
    cin>>s1;
    cout<<"S2: ";
    cin>>s2;

    if(s1.compare(s2) == 1){
        cout<<"S1 and S2 are equal."<<endl;
    }
    else{
        cout<<"S1 and S2 are not equal."<<endl;
    }


    cout<<"Equal: "<<compareString(s1,s2)<<endl;

}