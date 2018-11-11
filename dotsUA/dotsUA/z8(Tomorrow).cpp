/*
#include <iostream>
#include <fstream>
using namespace std;
int leapYear(int y) {
	if (y % 4 == 0) {
		if (y % 100 != 0) {
			return 1;
		}
	}
	if (y % 400 == 0)
		return 1;
	else
		return 0;
}
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int d = 0, m = 0, y = 0;
	int ly = 0;

	inp >> d >> m >> y;
	
	d += 2;

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) {
		if (d == 32) {
			d = 1;
			m += 1;
		}
		else if (d == 33) {
			d = 2;
			m += 1;
		}
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d == 31) {
			d = 1;
			m += 1;
			if (m == 12) {
				if (d == 32) {
					y += 1;
					m = 1;
					d = 1;
				}
				else if (d == 33) {
					y += 1;
					m = 1;
					d = 2;
				}
			}
		}
		else if (d == 32) {
			d = 2;
			m += 1;
		}
	}
	else if (m == 12) {
		if (d == 32) {
			y += 1;
			m = 1;
			d = 1;
		}
		else if (d == 33) {
			y += 1;
			m = 1;
			d = 2;
		}
	}
	else if (m == 2) {
		if (leapYear(y)) {
			if (d == 30) {
				d = 1;
				m += 1;
			}
			else if (d == 31) {
				d = 2;
				m += 1;
			}
		}
		else {
			if (d == 29) {
				d = 1;
				m += 1;
			}
			else if (d == 30) {
				d = 2;
				m += 1;
			}
		}
	}


	otp << d << " " << m << " " << y;

	return 1;
}
*/