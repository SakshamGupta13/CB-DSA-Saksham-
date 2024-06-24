#include<iostream>
using namespace std;

void mySwap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=2,b=4;
    mySwap(a,b);
    cout<<a<<" "<<b<<endl;
}