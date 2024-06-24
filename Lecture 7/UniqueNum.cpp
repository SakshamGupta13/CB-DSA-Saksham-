#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        ans=ans^x;
    }
    cout<<"Unique Number : "<<ans<<endl;
}