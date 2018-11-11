/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	int f1 = 0, f2 = 0, a = 0, N = 0;
	int f[50];
	f[0] = 1;

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	inp >> N;

	for (int i = 0; i <= 40; i++) {

		if (i == 0) {
			continue;
		}
		else if (i == 1) {
			f[1] = 1;
		}
		else {
			f[i] = f[i - 1] + f[i - 2];
		}

	}

	otp << f[N-1];
	

}
*/