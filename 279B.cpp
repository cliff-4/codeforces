#include <iostream>
using namespace std;

int main() {
	int n, t, max = 0;
	cin >> n >> t;
	int list[n];
	for (int i = 0; i < n; i++) cin >> list[i];

	int i = 0, j = 0, buffer = 0, sum = 0;
	while (j < n) {
		if (sum < t) {
			sum += list[j++];
			if (sum <= t) {
				buffer++;
				if (buffer > max) max = buffer;
			}
			else sum -= list[i++];
		}
		else if (sum == t) {
			sum += list[j++];
			sum -= list[i++];
		}
		else {
			sum -= list[i++];
			buffer--;
		}
	}

	cout << max;
}