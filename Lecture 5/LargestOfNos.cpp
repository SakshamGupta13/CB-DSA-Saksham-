#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int lsf=INT8_MIN;    // Largest so far
    int ssf=INT8_MAX;    // Smallest so far
    for(int i=1 ; i<=n ; i++){
        int x;
        cin>>x;
        if(x > lsf){
            lsf=x;
        }
        if(x < ssf){
            ssf=x;
        }
    }
    cout<<"Largest Number : "<<lsf<<endl;
    cout<<"Smallest Number : "<<ssf<<endl;
}