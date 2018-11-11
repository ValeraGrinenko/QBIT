/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int h = 0, m = 0, s = 0;

	for (int i = 1; i <= 5; i++) {
		h = 0;
		m = 0;
		s = 0;
		inp >> h >> m >> s;

		if (h >= 0 && h <= 23) {
			if (m >= 0 && m <= 59) {
				if (s >= 0 && s <= 59) {
					otp << "YES" << endl;
				}
				else {
					otp << "NO" << endl;
				}
			}
			else {
				otp << "NO" << endl;
			}
		}
		else {
			otp << "NO" << endl;
		}
	}

	return 1;
}
*/