#include<iostream>
using namespace std;
int main() {

	int cnt = 0; // to track the no. of characters
	char ch;

	while (true) {
		// cin >> ch; // cin >> ignores whitespaces
		ch = cin.get(); // cin.get() does not ignore whitespaces  ONLY FOR CHARACTERS 

		if (ch == '$') {
			break;
		}
		cnt++;
	}
	cout << "cnt = " << cnt << endl;
	return 0;
}