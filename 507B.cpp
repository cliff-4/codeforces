#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long int r, x, y, x1, y1, steps;
	cin >> r >> x >> y >> x1 >> y1;
	double dist = sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1))/(double)(2*r);
	for (steps = 0; dist-- > 0; steps++) {}
	cout << steps;
}