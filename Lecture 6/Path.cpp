#include<iostream>
using namespace std;
int main() {

	int x = 0; // to track the net movement along the x-axis
	int y = 0; // to track the net movement along the y-axis
	char ch;

	while (true) {
		ch = cin.get();
		if (ch == '\n') {
			break;
		}

		if (ch == 'N') {					// y = +ve  (N)					
			y++;
		} else if (ch == 'S') {			    // y =- ve	(S)		
			y--;
		} else if (ch == 'E') {				// x = +ve	(E)			
			x++;
		} else {							// x = -ve  (W)
			// ch == 'W'
			x--;
		}

	}

	cout << "(" << x << ", " << y << ")" << endl;

}