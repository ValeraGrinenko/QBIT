/*
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	double v[4], av[2];

	for (int i = 0; i < 4; i++) {
		inp >> v[i];
	}

	av[0] = (v[0] + v[1]) / 2;
	av[1] = (2 * v[2] * v[3]) / (v[2] + v[3]);

	otp << fixed << setprecision(3) << av[0] << endl << av[1];

	return 1;
}
*/