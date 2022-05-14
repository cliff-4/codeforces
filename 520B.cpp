#include <iostream>
using namespace std;

int main() {
	int n, m, count=0;
	cin >> n >> m;
	while (m > n) {
		if (m%2 == 1) {
			m+=1;
			count++;
		}
		m/=2;
		count++;
	}
	count += n-m;
	cout << count;	
}