#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n0, n1, n2;
		cin >> n0 >> n1 >> n2;
		int len = n0+n1+n2;
		if (n1) {
			for (int i = 0; i < n0+1; i++) cout << 0;
			int k = 1;
			if (n1%2) {
				while (n1--) {
					cout << k;
					k = !k;
				}
				for (int i = 0; i < n2; i++) cout << 1;
			}
			else {
				while (--n1) {
					cout << k;
					k = !k;
				}
				for (int i = 0; i < n2; i++) cout << 1;
				cout << 0;
			}
		}
		else for (int i = 0; i < len+1; i++) cout << ((n0) ? 0:1);

		cout << endl;
	}
}

// accepted