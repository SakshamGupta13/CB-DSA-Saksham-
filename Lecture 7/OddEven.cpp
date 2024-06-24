#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

    int RightMostBit=n&1;
    cout<<"RightMostBit is : "<<RightMostBit<<endl;

	if ((n & 1) == 1) {
        // 0th bit of n is one therefore n is odd
    cout << n << " is odd" << endl;

	} else {
    	// 0th bit of n is zero therefore n is even
    	cout << n << " is even" << endl;

	}

	if (n & 1) {
    	// 0th bit of n is one therefore n is odd
    	cout << n << " is odd" << endl;

	} else {
		// 0th bit of n is zero therefore n is even
		cout << n << " is even" << endl;
	}

	return 0;
}