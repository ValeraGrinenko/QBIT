/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, h = 0, m = 0, s = 0, a = 0;

	inp >> N;
	h = N / 3600 % 24;
	m = N % 3600 / 60;
	s = N % 3600 % 60;

	if (h > 9) {
		otp << h << ':';
	}
	else {
		otp << '0' << h << ':';
	}

	if (m > 9) {
		otp << m << ':';
	}
	else {
		otp << '0' << m << ':';
	}
 
	if (s > 9) {
		otp << s;
	}
	else {
		otp << '0' << s;
	}

	return 1;
}
*/