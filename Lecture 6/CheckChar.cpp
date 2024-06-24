#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase Alphabet";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Lowercase Alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special";
    }

    //  if(ch>=65 && ch<=90){
    //     cout<<"Uppercase Alphabet";
    // }
    // else if(ch>=97 && ch<=122){
    //     cout<<"Lowercase Alphabet";
    // }
    // else if(ch>=48 && ch<=57){
    //     cout<<"Digit";
    // }
    // else{
    //     cout<<"Special";
    // }
}