#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		// if (n == 1) {cout << "1 1" << endl; continue;} // only one column case.
		int **table = new int*[n];
		int count = 0, prev;
		vector<int>breaks;
		for (int i = 0; i < n; i++) {
			table[i] = new int[m];
			count = prev = 0;
			for (int j = 0; j < m; j++) {
				int buff;
				cin >> buff;
				table[i][j] = buff;
				if (buff < prev) {
					count++;
				}
				prev = buff;
			}
			breaks.push_back(count);
		}
	cout << ">";
	for (auto i = breaks.begin(); i != breaks.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
		// for (int i = 0; i < n; i++) {for (int j = 0; j < m; j++) {cout << table[i][j] << " ";}cout << endl;} //
	}
}