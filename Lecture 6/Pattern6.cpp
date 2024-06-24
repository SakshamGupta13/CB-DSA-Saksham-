#include<iostream>
using namespace std;
int main(){                                            //      1
    int n;                                             //     23
    cin>>n;                                            //    345      
    for(int i=0 ; i<=n ; i++ ){                        //   4567                   
        cout<<endl;                                    //  56789
        for(int j=1 ; j<=n-i ; j++ ){
            cout<<" ";
        }
        int num=i;
        for(int j=1 ; j<=i ; j++){
            cout<<num;
            num++;
        }
    }
}