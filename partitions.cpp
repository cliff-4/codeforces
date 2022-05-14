#include <iostream>

using namespace std;

void test() {
	cout << "TESTTESTTEST" << endl;
}

int paritions(int n) {
	n++;

	int** partitionmatrix = new int*[n];
	for (int i = 0; i < n; i++) {
		partitionmatrix[i] = new int[n];
	}
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) partitionmatrix[i][j] = 0;

	for (int i = 0; i < n; i++) partitionmatrix[i][0] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (i > j) {
				partitionmatrix[i][j] = partitionmatrix[i-1][j];
			}
			else {
				int nosummand = partitionmatrix[i-1][j];
				int withsummand = partitionmatrix[i][j-i];
				partitionmatrix[i][j] = nosummand + withsummand;
			}
		}
	}
	n--;
	
	return partitionmatrix[n][n];
}

int main() {
	int n;
	cin >> n;
	if (n == -1) return 0;
	cout << "P(" << n << ") = " << paritions(n) << endl;
	main();
}