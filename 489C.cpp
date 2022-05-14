#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	if (m == 1 && n == 0) {cout << "0 0"; return 0;}
	if (!n) {cout << "-1 -1"; return 0;}
	int biggest[m], smallest[m];
	for (int i = 0; i < m; i++) biggest[i] = smallest[i] = 0;
	
	//special cases
	if (m == 1) {
		if (n > 9) cout << "-1 -1";
		else cout << n << " " << n;
		return 0;
	}

	//making biggest int
	biggest[0] = n;
	for (int i = 0; i < m-1; i++) {
		if (biggest[i] > 9) {
			biggest[i+1] = biggest[i]-9;
			biggest[i] = 9;
		}
	}

	if (biggest[m-1] > 9) {
		cout << "-1 -1";
		return 0;
	}

	//making smallest int
	for (int i = 0; i < m; i++) smallest[i] = biggest[m-i-1];
	if (smallest[0] == 0) {
		int index = 1;
		for (; smallest[index] == 0; index++) {}
		smallest[0]++;
		smallest[index]--;
	}

	for (int i = 0; i < m; i++) cout << smallest[i];
	cout << " ";
	for (int i = 0; i < m; i++) cout << biggest[i];


}