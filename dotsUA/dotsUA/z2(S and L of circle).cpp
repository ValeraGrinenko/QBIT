/*
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	long double R = 0, S = 0, L = 0, pi = acos(-1);
	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");
	inp >> R;
	S = pi * (R*R);
	L = (2 * pi) * R;
	otp.setf(ios_base::fixed);
	otp << S << endl << L;
	inp.close();
	otp.close();

	return 0;
}
*/