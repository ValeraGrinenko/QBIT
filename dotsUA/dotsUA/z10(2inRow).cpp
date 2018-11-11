/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int a = 0, b = 0, am = 0, max = 0, x = 0;

	inp >> a >> b;
	while (b != 0 || a != 0) {
		if (a == b) {
			am++;
		}
		else if (a != b) {
			if (am > max) {
				max = am;
				am = 0;
			}
			else {
				am = 0;
			}
		}
		a = b;
		inp >> b;

	}
	if (max > am) {
		otp << max + 1;
	}
	else if(max == 0) {
		otp << '0';
	}
	else {
		otp << am + 1;
	}




	return 1;
}
*/