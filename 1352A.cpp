#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int index = 0; index < t; index++) {
		cin >> n;
		int *digits = new int[5];
		int i = 5, len, sigfig = 0;
		while (n) {
			if (n%10) sigfig++;
			digits[--i] = n%10;
			n/=10;
		}
		len = 5-i;
		cout << sigfig << endl;
		for (int k = 4; k >= i; k--) {
			if (digits[k]) {
				cout << digits[k];
				for (int j = 0; j < (4-k); j++) {
					cout << 0;
				}
				cout << " ";
			}
		}
		cout << endl;
	}

}

//accepted