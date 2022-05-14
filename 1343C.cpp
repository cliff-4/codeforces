#include <iostream>
//ACCEPTED
int main() {
	int t, n;
	long long int buffer, prev, sum, max;
	scanf("%d", &t);
	while (t--) {
		sum = 0;
		scanf("%d%lld", &n, &prev);
		max = prev;
		for (int i = 1; i < n; i++) {
			scanf("%lld", &buffer);
			if ((buffer < 0) ^ (prev < 0)) {
				sum += max;
				max = buffer;
			}
			else {
				if (buffer > max)
					max = buffer;
			}
			prev = buffer;
		}
		sum += max;
		printf("%lld\n", sum);
	}
}