#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n < 4) {
			cout << -1 << endl;
			continue;
		}
		if (n == 4) {
			cout << "3 1 4 2\n";
			continue;
		}
		int isodd = (n%2) ? 1:0;
		if (!isodd) n--;
		int *array = new int[n], buff = n, index = 0;
		for (int i = 0; i < (n-4)/2+1; i++) {
			array[index++] = buff;
			buff -= 2;
		}
		array[index++] = 3;
		array[index++] = 1;
		array[index++] = 4;
		array[index++] = 2;
		buff = 6;
		for (int i = 0; i < (n-4)/2; i++) {
			array[index++] = buff;
			buff += 2;
		}
		for (int i = 0; i < n; i++) cout << array[i] << " ";
		if (!isodd) cout << n+1;
		cout << endl;
		delete array;
	}
}

// accepted