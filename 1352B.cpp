#include <iostream>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		if (((n-(k-1))%2)&&(n-(k-1)>0)) {
			cout << "YES" << endl;
			for (int j = 0; j < k-1; j++) {
				cout << 1 << " ";
			}
			cout << n-k+1 << endl;
		}
		else if ((!((n-2*(k-1))%2))&&(n-2*(k-1)>0)) {
			cout << "YES" << endl;
			for (int j = 0; j < k-1; j++) {
				cout << 2 << " ";
			}
			cout << n+2-2*k << endl;
		}
		else cout << "NO" << endl;
	}
}

//accepted