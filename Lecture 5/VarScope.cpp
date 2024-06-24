#include<iostream>
using namespace std;

int x=100; //Global Variable

int main(){
cout<<x<<endl;

int x=10; //Local Variable
cout<<x<<endl;

cout<< x <<" "<< ::x <<endl; //access global variable
::x++;
cout<< x <<" "<< ::x <<endl;

static int a; //Static variable  (x is static variable)
cout<<a<<endl;

}