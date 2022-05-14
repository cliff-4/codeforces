#include <iostream>

using namespace std;

int pow(int base, int power) {
	int multipland = base;
	for (int i = 0; i < power-1; i++) base *= multipland;
	return base;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int *array = new int[n], *buffarray = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> array[i];
			buffarray[i] = array[i];
		}
		if (n <= k) {
			int highest = pow(2, 30);
			for (int i = 0; i < n; i++) array[i] = array[i] | highest;
			int base = array[0];
			for (int i = 1; i < n; i++) base = base & array[i];
			cout << base << endl;
			continue;
		}
		int index = 0;
		for (int i = 0; i < 31; i++) {
			int base = 1, count = 0, highestcount = 0;
			for (int j = 0; j < n; j++) {
				if (base & array[j]) count++;
				base *= 2;
				if (k + count >= n) index = i;
			}
		}
		int base;
		int ans = array[0] | (base = pow(2, index));
		for (int i = 1; i < n; i++) ans = ans & (array[i] | base);
		cout << ans << endl;	
	}
}