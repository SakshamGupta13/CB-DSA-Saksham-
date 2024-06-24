#include<iostream>
using namespace std;                                        //    1    
int main(){                                                 //    1 2                       
    int n;                                                  //    1 2 3
    cin>>n;                                                 //    1 2 3 4                 
    for(int i=0 ; i<=n ;i++ ){                              //    1 2 3 4 5                  
        //int num=1;                                                    
        for(int j=1 ; j<=i ; j++ ){
            cout<<j<<" ";       //cout<<num;
        }                       //num++;
        cout<<endl;
    }
}