#include <iostream>
#include <algorithm>

int main() {
	int n, m, a, b;
	scanf("%d%d%d%d", &n, &m, &a, &b);
	int x = (n) * a, y = (n/m)*b + (n%m)*a, z = (n/m + 1) * b;
	printf("%d", (x < y && x < z) ? x : ((y < z) ? y : z));
}