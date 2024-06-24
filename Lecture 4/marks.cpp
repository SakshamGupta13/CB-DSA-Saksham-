#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    if(m<=100 and m>=91){
        cout<<"A"<<endl;
    }else if(m<=90 and m>=81){
        cout<<"B"<<endl;
    }else if(m<=80 and m>=71){
        cout<<"C"<<endl;
    }else if(m<=70 and m>=61){
        cout<<"D"<<endl;
    }else{
        cout<<"F"<<endl;
    }
}