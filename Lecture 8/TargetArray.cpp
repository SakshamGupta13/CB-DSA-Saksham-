#include<iostream>
using namespace std;
int main(){
    int a[5]={10,20,30,10,20};
    int t;
    cin>>t;
    int i;
    for(i=0;i<5;i++){
        if(a[i]==t){
            cout<<t<<" found"<<endl;
            break;
        }
    }        
    if(i==5){
        cout<<t<<" not found"<<endl;
    }
}