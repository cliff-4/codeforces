#include <iostream>

using namespace std;

int main() {
	int n, m, *pilesarray, *juicyworms;
	pilesarray = new int[n];
	juicyworms = new int[m];

	cin >> n;
	for (int i = 0; i < n; i++) cin >> pilesarray[i];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> juicyworms[i];

	for (int i = 0; i < m; i++) {
		int worm = juicyworms[i];
		int pile = 1;
		for (int j = 0; j < n; j++) {
			if (juicyworms[i] > pilesarray[j]) {
				juicyworms[i] -= pilesarray[j];
				pile++;
			}
			else break;

		}
		cout << pile << endl;
	}

}
