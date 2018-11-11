/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	double a = 0, b = 0, c = 0, d = 0, s1 = 0, s21 = 0, s22 = 0, s23 = 0;

	inp >> a >> b >> c >> d;

	if (a > b && a > c && a > d) {
		s1 = (a * 0.5) + b + c + d;
		s21 = a + (b + c) * 0.5 + d;
		s22 = a + b + (c + d) * 0.5;
		s23 = a + c + (b + d) * 0.5;
	}
	else if (b > a && b > c && b > d) {
		s1 = (b * 0.5) + a + c + d;
		s21 = b + (a + c) * 0.5 + d;
		s22 = b + a + (c + d) * 0.5;
		s23 = b + c + (a + d) * 0.5;
	}
	else if (d > a && d > b && d > c) {
		s1 = (d * 0.5) + a + b + c;
		s21 = d + (a + b) * 0.5 + c;
		s22 = d + a + (b + c) * 0.5;
		s23 = d + b + (a + c) * 0.5;
	}
	else if (c > a && c > b && c > d) {
		s1 = (c * 0.5) + a + b + d;
		s21 = c + (a + b) * 0.5 + d;
		s22 = c + a + (b + d) * 0.5;
		s23 = c + b + (d + a) * 0.5;
	}

	if (s1 < s21 && s1 < s22 && s1 < s23) {
		otp << s1;
	}
	else if (s21 < s1 && s21 < s22 && s21 < s23) {
		otp << s21;
	}
	else if (s22 < s1 && s22 < s21 && s22 < s23) {
		otp << s22;
	}
	else if (s23 < s1 && s23 < s22 && s23 < s21) {
		otp << s23;
	}



	return 1;
}
*/