#include <iostream>

int main() {
	long long unsigned int t, n, k;
	scanf("%d", &t); 
	while (t--) {
		scanf("%llu%llu", &n, &k);

		printf("%llu\n", (n * k)/(n-1) + ((k%(n-1) == 0) ? -1:0));
	}
}

//accepted