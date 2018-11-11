/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, M = 0, PN = 0, st = 0, a = 0, st1 = 0, st2 = 0;

	inp >> M >> N;

	if (M % 3 == 0) {
		PN += M / 3;
	}
	else if (M % 3 != 0) {
		PN += (M / 3) + 1;
	}

	if (N % 4 == 0) {
		PN += N / 4;
	}
	else if (N % 4 != 0) {
		PN += (N / 4) + 1;
	}

	
	otp << PN;

	return 1;
}
*/