#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> array{};
	int *itlist = new int[n]{};
	map<string, int>dictionary;

	for (int i = 0; i < n; i++) {
		string buff;
		cin >> buff;
		array.push_back(buff);
		if (dictionary.find(buff) != dictionary.end()) {
			dictionary[buff] += 1;
		}
		else {
			dictionary[buff] = 1;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if ((dictionary[array[i]]) == 0) {
			cout << "OK" << endl;
			continue;
		}
		for (int j = i-1; j >= 0; j--) {
			if (array[i] == array[j]) {
				itlist[i] = itlist[j]+1;
				break;
			}
		}
		if (itlist[i] == 0) {
			cout << "OK" << endl;
		}
		else {
			cout << array[i] << itlist[i] << endl;
		}
	}

/*	//
	cout << endl << endl;
	for (auto element :dictionary) {
		cout << element.first << " " << element.second << endl;
	}*/
}

//accepted