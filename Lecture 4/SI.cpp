#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"Enter Principal : ";
    cin>>p;

    int r;
    cin>>r;

    int t;
    cin>>t;

    cout<<p*r*t/100<<endl;
    cout<<(p*r*t)/100<<endl; //More Readable

    cout<<p*r*t/100.0<<endl;
    cout<<p*r*t*1.0/100<<endl;
    cout<<(float)p*r*t/100<<endl;
    cout<<static_cast<float>(p)*r*t/100<<endl;
}