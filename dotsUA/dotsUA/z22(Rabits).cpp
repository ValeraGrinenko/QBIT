/*
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int n = 0, m = 0, k = 0;

	inp >> n >> m;

	k = m / n;
	m %= n;
	if (m) {
		k++;
	}

	otp << k;

	return 1;
}
*/