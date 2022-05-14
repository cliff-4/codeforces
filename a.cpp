#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << ((n%2) ? ((n+1)*(n+1-(n/2))):(((n/2)+1)*((n/2)+1))) << endl;
}