#include <iostream>
#include <algorithm>

int main() {
	int n, a[100], m, b[100];

	scanf("%d", &n);
	for (int i = 0; i < n; scanf("%d", &a[i++]));
	scanf("%d", &m);
	for (int i = 0; i < m; scanf("%d", &b[i++]));

	std::sort(a, a+n);
	std::sort(b, b+m);

	int j = 0, k = 0, pairs = 0;
	while (j < n && k < m) {
		int diff = a[j] - b[k];
		if (diff < -1) j++;
		else if (diff > 1) k++;
		else {
			pairs++;
			j++;
			k++;
		}
	}
	printf("%d", pairs);

}