/*
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int n = 0, na[150], diff = 0, pgai = 0, mindiff = 21000, diffn = 0, diffa = 0;
	
	inp >> n;

	for (int i = 0; i < n; i++) {
		inp >> na[i];
	}

	inp >> pgai;

	for (int i = 0; i < n - 1; i++) {
		diff = abs(pgai - na[i]);
		if (diff < mindiff) {
			mindiff = diff;
			diffn = i + 1;
			diffa = na[i];
		}
		else if (diff == mindiff) {
			if (na[i] < diffa) {
				mindiff = diff;
				diffn = i + 1;
				diffa = na[i];
			}
		}
		else {
			continue;
		}
	}

	otp << diffn;

	return 1;
}
*/