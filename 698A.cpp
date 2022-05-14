#include <iostream>
using namespace std;

//INCOMPLETE CODE
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; cin >> a[i++])

	int restdays = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 3 || a[i] == 0) 
			continue;
		if (a[i] == a[i+1])
			a[++i] = 0;
		
	}

	

}
