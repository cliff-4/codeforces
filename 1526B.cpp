#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, t;
	cin >>t;
	while (t--) {
		cin >> n;
		cout << ">" <<(n>=((n%11)*111)) << endl;

	}
}

/*
6
63909
2047
35195
1623
2372
3849516

*/