#include <iostream>

using namespace std;

int fact(int n) {
    long long int k = 1;
    while (n) k *= n--;
    return k;
}

int main() {
	// we assume x! > x^2
	// 15! always > n
	// 2^40 > 10^12 > 2^39
	long long int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		n = fact(n);
		int *binarray, len = 0;
		binarray = new int[41];
		while (n > 0) {
			binarray[len++] = n%2;
			n /= 2;
		}
		
		int k = len;
		while (k) cout << binarray[--k];
		cout << endl;
	}
}
