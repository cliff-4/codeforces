#include <iostream>

using namespace std;

int main() {
	int t, i=0;
	cin >> t;
	while (t--) {
		int n, *candyarray;
		cin >> n;
		candyarray = new int[n];
		for (int i = 0; i < n; i++) cin >> candyarray[i];
		//for (int i = 0; i < n; i++) cout << candyarray[i] << " "; cout << endl; //
		int A=0, B=0, lastcandy=0, steps=0, Ai=0, Bi=n-1;
		while (Ai <= Bi) {
			int currentcandylength=0;
			while (currentcandylength <= lastcandy) {
				currentcandylength += candyarray[Ai];
				candyarray[Ai++] = 0;
				if (Ai == n-1 && Bi != n-1) break;
			}
			A += lastcandy = currentcandylength;
			steps++;
			//cout << Ai << endl; //
			if (Ai == n-1 && Bi != n-1) break;
			if (Bi < Ai) break;
			currentcandylength=0;
			while (currentcandylength <= lastcandy) {
				currentcandylength += candyarray[Bi];
				candyarray[Bi--] = 0;
				if (Bi < Ai) break;
			}
			B += lastcandy = currentcandylength;
			steps++;
			//cout << Bi << endl; //
		}
		//for (int i = 0; i < n; i++) cout << candyarray[i] << " "; cout << endl; //
		cout << steps << " " << A << " " << B << " " << endl;
		//cout  << endl << Ai << endl << Bi;
	}

}

//accepted