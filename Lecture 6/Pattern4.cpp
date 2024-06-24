#include<iostream>
using namespace std;                                        //    1
int main(){                                                 //    0 1
    int n;                                                  //    1 0 1      
    cin>>n;                                                 //    0 1 0 1
    for(int i=0 ; i<=n ; i++ ){                             //    1 0 1 0 1            
        int num= i%2==0 ? 0 : 1;
        // if(i%2==0){
        //     num=0;
        // }else{
        //     num=1;
        // }
        for(int j=1 ; j<=i ; j++ ){
            cout<<num<<" ";
            num=1-num;
           // num=!num;
        }
        cout<<endl;
    }
}