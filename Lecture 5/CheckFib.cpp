#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
    if(n==0 || n==1){
        cout<<"true"<<endl;
        break;
    }
    else{
        int a=0;
        int b=1;

        int c=a+b;

        if(c==n){
            cout<<"true"<<endl;
            break;
        }
        if(c>n){
            cout<<"false"<<endl;
            break;
        }
        a=b;
        b=c;
    }
    }
}