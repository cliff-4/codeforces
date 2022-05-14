#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int dim = n+1+(n%2);
	int center = dim/2; // n/2 + n%2
	int **array = new int*[dim];
	for (int i = 0; i < dim; i++) array[i] = new int[dim]{};

	int n1 = n/2+n%2, n2 = n/2;
	
	for (int i = center-n1; i < center+n1+1; i+=2) {
		for (int j = center-n2; j < center+n2+1; j+=2) {
			array[i][j] = 1;
		}
	}

	int sum = 0;
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			sum += (array[i][j] || array[j][i]);
		}
	}

	//for (int i = 0; i < dim; i++) {for (int j = 0; j < dim; j++) {cout << (array[i][j] || array[j][i]) << " ";}cout << endl;} //
	cout << sum << endl;
}


/* 

Alternate Solution:
cout << ((n%2) ? ((n+1)*(n+1-(n/2))):(((n/2)+1)*((n/2)+1))) << endl;

*/