#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

//need to optimize even further
int check(int *n, int deno) {
	int count = 0;
	while ((*n)%deno == 0) {
		(*n) /= deno;
		count++;
		if (count == 3) return count;
	}
	return count;
}
int no_of_prime_factors(int n) {
	int count = 0, k = n, deno;

	count += check(&n, 2);
	if (count == 3) return count;

	count += check(&n, deno);
	if (count == 3) return count;

	int i = 1;
	while (i < k) {
		count += check(&n, 6*i-1);
		if (count == 3) return count;

		count += check(&n, 6*i+1);
		if (count == 3) return count;

		i++;	
	}
	return count;
}

int main() {
	int t;
	char *players[] = {"Ashishgup", "FastestFinger"};
	cin >> t;
	int list[t];
	for (int i = 0; i < t; cin >> list[i++]);

	std::unordered_set<int> powerof2s = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};

	for (int i = 0; i < t; i++) {
		if (list[i]%2 == 1) {
			cout << ((list[i] == 1) ? players[1] : players[0]) << endl;
			continue;
		}
		if (powerof2s.count(list[i])) {
			cout << ((list[i] == 2) ? players[0] : players[1]) << endl;
			continue;
		}
		if (list[i]%4 == 0) {
			cout << players[0] << endl;
			continue;
		}
		cout << ((no_of_prime_factors(list[i]) > 2) ? players[0] : players[1]) << endl;
	}
}