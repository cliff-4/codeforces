#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n, left=0, right=0, sum=0, buff=0, kekw = 0, total = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> buff;
			sum += buff;
			total += buff;
			if (sum > kekw) kekw = sum, right = i;
			if (sum <= 0) sum = 0, left = i;
		}
		cout << ((left==0&&right==(n-1)&&sum<=total)?"YES":"NO") << endl;
	}
}

// accepted