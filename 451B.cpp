#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> array;
	for (int i = 0; i < n; i++) {
		int buff;
		cin >> buff;
		array.push_back(buff);
	}
	vector<int> infl;
	int parity = array[1] - array[0];
	if (abs(array[0]-array[1]) != 1) {
		parity = 1;
		infl.push_back(0);
	}
	for (int i = 0; i < n-1; i++) {
		if (array[i+1]-array[i] != parity) {
			infl.push_back(i);
			parity *= -1;
		}
	}
	int size = infl.size();
	if (size < 3) {
		cout << "yes" << endl;
		if (size == 0) {
			cout << array[0] << " " << array[0];
		}
		else if (size == 1) {
			cout << array[0] << " " << array[infl[0]];
		}
		else {
			cout << array[infl[0]+1] << " " << array[infl[1]];
		}
	}
	else {
		cout << "no";
	}
	cout << endl;
	for (int i = 0; i < infl.size(); i++) cout << infl[i] << " "; // printing inflection points
}


/*
10
1 2 3 4 9 8 7 6 5 10

*/