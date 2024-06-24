// Ternary/Conditional Operator
#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;


     // Check +ve,-ve,zero by ternary operator
     int n;
	cin >> n;

	n > 0 ? cout << "+ve" << endl : n < 0 ? cout << "-ve" << endl : cout << "zero" << endl;
}