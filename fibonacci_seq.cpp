#include <iostream>

using namespace std;

unsigned long long fibb_dyn(unsigned long long n) {
	static unsigned long long *arr = new unsigned long long[n+1]{0};
	if (arr[n] || n<2) {
		return arr[n];
	}
	arr[1] = 1;
	arr[n] = fibb_dyn(n-1) + fibb_dyn(n-2);
	return arr[n];
}

unsigned long long fibb_nrm(unsigned long long n) {
	static unsigned long long *arr = new unsigned long long[n+1]{0};
	if (n < 2) return arr[n];
	arr[1] = 1;
	arr[n] = fibb_nrm(n-1) + fibb_nrm(n-2);
	return arr[n];
}

int main() {
	int n;
	bool kekw = true;
	while (true) {
		if (kekw) cout << "using fibb_dyn: ";
		else cout << "using fibb_nrm: ";
		cin >> n;
		if (n == 0) {
			kekw = !kekw;
			continue;
		}
		if (kekw) {
			fibb_dyn(n);
			for (int i = 0; i <= n; i++) cout << fibb_dyn(i) << endl;
		}
		else {
			fibb_nrm(n);
			for (int i = 0; i <= n; i++) cout << fibb_nrm(i) << endl;
		}
	}
}

// DESCRIPTION
// This program uses two types of functions to generate fibonacci sequences. One using a hash table and other just brute-forcing it. You can type in "0" as input for switching between the two types. 
// The program takes in an input 'n' and outputs a \n separated list of the numbers. 
// One thing i found interesting about this is that fibb_dyn can generate n=100 in less than a second but fibb_nrm struggles even with n=40. Would be fun to graph their respective n v/s t and comparing it. Might be a great visualisation for explaining time complexities of programs and the power of dynamic programming #BLOG_IDEA
// LMFAOOOO the program fucking CRASHED AT fibb_nrm(50) HHAHAHAHAHAHAHHAHAHAAHAHA