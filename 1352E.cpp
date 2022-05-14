#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		short int *array, *check;
		cin >> n;
		array = new short int[n];
		check = new short int[n+1];

		check[0] = (short int)0;
		for (int i = 0; i < n; i++) {
			int buff;
			cin >> buff;
			array[i] = (short int)buff;
			check[i+1] = (short int)0;
		}
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		for (int blocksize = 2; blocksize <= n; blocksize++) {
			int startindex = 0, endindex = startindex+blocksize, sum = 0;
			for (int i = 0; i < blocksize; i++) sum += array[i];
			if (sum <= n) check[sum] = (short int)1;
			for (int i = 0; i < n-blocksize; i++) {
				sum -= array[startindex++];
				sum += array[endindex++];
				if (sum <= n) check[sum] = (short int)1;
			}
		}

		int count = 0;
		for (int i = 0; i < n; i++) if (check[array[i]]) count++;
		delete array;
		delete check;
		cout << count << endl;
	}
}

//accepted