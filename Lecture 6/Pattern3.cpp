#include<iostream>
using namespace std;                                          //  1    
int main(){                                                   //  2 3
    int n;                                                    //  4 5 6      
    cin>>n;                                                   //  7 8 9 10
    int num=1;                                                    
    for(int i=0 ; i<=n ;i++ ){
        for(int j=1 ; j<=i ; j++ ){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}