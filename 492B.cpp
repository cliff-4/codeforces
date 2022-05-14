#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l;
	scanf("%d%d", &n, &l);
	int points[1000];
	for (int i = 0; i < n; i++) scanf("%d", &points[i]);
	sort(points, points + n);
	int max = 0, buff;
	int bigger_end = (points[0] > l-points[n-1]) ? points[0]:l-points[n-1];
	for (int i = 0; i < n-1; i++) {
		buff = points[i+1] - points[i];
		if (buff > max) max = buff;
	}
	printf("%.10f", ((max/2. > bigger_end) ? max/2. : bigger_end/1.));
}