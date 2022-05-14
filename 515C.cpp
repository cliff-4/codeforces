#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a;
	int n;
	cin >> n >> a;
	int list[60];
	int j = 0;
	for (int i = 0; i < n; i++)	{
		switch (a%10) {
			case 0:
			case 1: break;
			case 2:
			case 3://
			case 5://
			case 7: list[j++] = a%10; break;
			case 4: list[j++] = 3; list[j++] = 2; list[j++] = 2; break;
			case 6: list[j++] = 5; list[j++] = 3; break;
			case 8: list[j++] = 7; list[j++] = 2; list[j++] = 2; list[j++] = 2; break;
			case 9: list[j++] = 7; list[j++] = 3; list[j++] = 3; list[j++] = 2; break;
		}
		a /= 10;
	}
	sort(list, list + j);
	for (int i = j; i > 0; cout << list[--i]) {}
}