#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<int> worms, tastyworm;
	for (int i = 0; i < n; i++) {
		int buff;
		cin >> buff;
		worms.push_back(buff);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int buff;
		cin >> buff;
		tastyworm.push_back(buff);
	}

	int *odomos = new int[m]{};
	

	// have to optimize this bit of code. it's taking too long.
	for (int i = 0; i < m; i++) {
		int j;
		for (j = 0; (tastyworm[i] > 0) && (j < n); j++) {
			tastyworm[i] -= worms[j];
		}
		odomos[i] = j;
		/////////////////////////////////////////////////////////////////////////
	}
	//

	for (int i = 0; i < m; i++) {
		cout << odomos[i] << endl;
	}

}
