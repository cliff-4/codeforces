#include <iostream>

using namespace std;

void maxlen(int* hashtable, int n, int a, int b, int c, int depth) {
	if (n < 0) return;
	hashtable[n] = depth;
	if (hashtable[n-a] < depth+1) maxlen(hashtable, n-a, a, b, c, depth+1);
	if (hashtable[n-b] < depth+1) maxlen(hashtable, n-b, a, b, c, depth+1);
	if (hashtable[n-c] < depth+1) maxlen(hashtable, n-c, a, b, c, depth+1);
}

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int *hashtable = new int[n]{};
	maxlen(hashtable, n, a, b, c, 0);
	cout << hashtable[0];
	return 0;
}