#include <iostream>

int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; std::cin >> a[i++]);
	int profit = 0, ip ,jp, max = 0;
	for (int i = 0; i < n-1; i++) {
		profit = 0;
		for (int j = i; j < n; j++) {
			if (a[j]) profit--;
			else profit++;
			if (profit > max) {
				max = profit;
				ip = i;
				jp = j;
			}
		}
	}
	int count = 0, zeroes = 0;
	for (int i = 0; i < n; i++) {
		if (!a[i]) zeroes++;
		if (i >= ip && i <= jp) count += 1-a[i];
		else count += a[i];
	}
	if (zeroes < 2) {
		printf("%d", n-1 + zeroes);
	}
	else {
		printf("%d", count);
	}
}