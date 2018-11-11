/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int n = 0, m = 0, x = 0, a[10], b = 0, c = 0;

	inp >> m >> x;

	a[4] = m % 10;
	m = m / 10;
	a[3] = m % 10;
	m = m / 10;
	a[2] = 0;
	a[1] = m % 10;
	m = m / 10;
	a[0] = m % 10;
	m = m / 10;

	for (int i = 0; i < 10; i++) {
		c = 0;
		c = (a[4] * 1) + (a[3] * 10) + (i * 100) + (a[1] * 1000) + (a[0] * 10000);
		if (c % 9 == x) {
			otp << c;
			break;
		}
	}
 


	return 1;
}
*/