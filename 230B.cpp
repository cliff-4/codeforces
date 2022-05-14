
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n = 1;
	//cin >> n; //
	vector<unsigned long long> array;
	unsigned long long largest = 0;
	for (int i = 0; i < n; i++) {
		unsigned long long buff;
		cin >> buff;
		array.push_back(buff);
		if (buff > largest) largest = buff;
	}

	// primes' list generation begins
	vector<unsigned long long> primes;
	primes.push_back(2);
	for (unsigned long long i = 2; i <= largest; i++) {
		bool isprime = true;
		for (auto j = primes.begin(); j != primes.end(); j++) {
			if (i % (*j) == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime) {
			unsigned long long last = *(primes.end()-1);
			for (unsigned long long j = last; j < (unsigned long long)sqrt(i) + 1; j++) {
				if (i % j == 0) {
					isprime = false;
					break;
				}
			}
		}
		if (isprime) primes.push_back(i);
	}
	// primes' list generation ends
	cout << size(primes) << endl;
	//for (auto i = primes.begin(); i != primes.end(); i++) cout << *i << " ";
	main();

}

//incomplete