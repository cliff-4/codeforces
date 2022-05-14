#include <iostream>

using namespace std;

int main() {
	// n length
	// x to choose
	int t, n, x, possible;
	cin >> t;
	int *ans = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> n >> x;
		int O = 0, E = 0;
		for (int j = 0, buff; j < n; j++) {
			cin >> buff;
			if (buff%2) O++;
		}
		E = n-O;
		
		if (x - E > 0) {
			if ((x-E)%2) possible = 1;
			else {
				if (O > x-E) {
					if (!E) possible = 0;
					else possible = 1;
				}
				else possible = 0;
			}
		}
		else {
			if (O > 0) possible = 1;
			else possible = 0;
		}

		if (possible) cout << "Yes";
		else cout << "No";
		cout << endl;

	}
}

// accepted