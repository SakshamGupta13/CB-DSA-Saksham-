#include<iostream>
using namespace std;
int main(){                                           //             1
    int n;                                            //           2 3 2   
    cin>>n;                                           //         3 4 5 4 3
    for(int i=0 ; i<=n ; i++ ){                       //       4 5 6 7 6 5 4       
        cout<<endl;                                   //     5 6 7 8 9 8 7 6 5
        for(int j=1 ; j<=n-i ; j++ ){
            cout<<" ";
        }
        int num=i;
        for(int j=1 ; j<=i ; j++){
            cout<<num;
            num++;
        }
        num=2*i-2;
        //num=num-2;
        for(int j=1 ; j<=i-1 ; j++){
            cout<<num;
            num--;
        }
    }
}