#include<iostream>
using namespace std;
int main() {

	const int x = 10;

	cout << x << endl;

	// x++;       // error : you can not increment read only variable

	// const int y;     // error : uninitalized const 'z

	// y = 20;

	return 0;
}