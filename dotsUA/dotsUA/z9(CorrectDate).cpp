/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int m = 0, d = 0;

	for (int i = 1; i <= 5; i++) {
		d = 0;
		m = 0;
		inp >> d >> m;
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (d > 31 || d <= 0) {
				otp << "NO" << endl;
			}
			else {
				otp << "YES" << endl;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d > 30 || d <= 0) {
				otp << "NO" << endl;
			}
			else {
				otp << "YES" << endl;
			}
		}
		else if(m == 2) {
			if (d > 28 || d <= 0) {
				otp << "NO" << endl;
			}
			else {
				otp << "YES" << endl;
			}
		}
		else {
			otp << "NO" << endl;
		}
	}
	return 1;
}
*/