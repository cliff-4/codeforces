#include <iostream>

using namespace std;

int main() {
	int n, X=0, Y=0, Z=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		X += x;
		Y += y;
		Z += z;
	}
	if (!X && (!Y && !Z)) cout << "YES";
	else cout << "NO";
}

//correct