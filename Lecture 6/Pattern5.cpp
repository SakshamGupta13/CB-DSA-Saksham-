#include<iostream>
using namespace std;
int main(){                                          //           *
    int n;                                           //          **       
    cin>>n;                                          //         ***     
    for(int i=0 ; i<=n ;i++ ){                       //        ****                 
        cout<<endl;                                  //       *****         
        for(int j=1 ; j<=n-i ; j++ ){
            cout<<" ";
        }
        for(int j=1 ; j<=i ; j++){
            cout<<"*";
        }
    }
}