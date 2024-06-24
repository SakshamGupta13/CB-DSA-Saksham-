#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    if(n==0 || n==1){
        cout<<n<<endl;
    }
    else{
        int a=0; // 1st fibonacci No.
        int b=1; // 2nd fibonacci No.
        
        int i=2;
        while(i<=n){
            int c=a+b;
            a=b;
            b=c;

            i=i+1;
        }
        cout<<b<<endl;
    }
}