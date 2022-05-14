#include <iostream>
using namespace std;

int main() {
	int test_cases, n, k;
	cin >> test_cases;
	while (test_cases-- > 0) {
		cin >> n >> k;
		int list[10000];
		for (int i = 0; i < n; i++) cin >> list[i];
		int i = 0, j = k;
		while (j < n) {
			if (list[i] == list[j]) {
				i++;
				j++;
			}
			else {
				if ()
			}
		}
	}
}