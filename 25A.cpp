#include <iostream>

using namespace std;

int main () {
	int n;
	cin >> n;
	int *array = new int[n], index;
	for (int i = 0; i < n; i++) cin >> array[i];
	for (index = 0; index < n-1; index++) if (array[index]%2 != array[index+1]%2) break;
	cout << ((index)?(index+2):(((array[0]%2==array[2]%2)?2:1)));
}

// accepted