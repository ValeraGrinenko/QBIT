/*
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	double K = 0, E = 0, B = 0, i = 0, k = 0, N = 0, W = 0;

	inp >> K >> B >> E >> i;

	N = K - 1;

	k = pow((E / B), 1 / N) - 1;

	W = B * pow((1 + k), i - 1);

	otp << fixed << setprecision(5) << W;

	return 1;
}
*/