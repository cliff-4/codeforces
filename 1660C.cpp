#include <iostream>

using namespace std;
int count = 0;
int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		count = 0;
		string word;
		cin >> word;
		int length = size(word);
		for (int j = 0; j < length; j++) {
			sexwithword(word);
		}
		cout << count << endl;
	}
}

void sexwithword(string s) {
	if (size(s) == 0) return;
	if (size(s) == 1) {
		count++;
		return;
	}

}