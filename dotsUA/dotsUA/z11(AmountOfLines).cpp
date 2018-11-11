/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	int n = 0, m = 0, a[101][101], an[101], even = 0, odd = 0, am = 0;
	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");
	inp >> n >> m;
	for (int z1 = 1; z1 <= n; z1++) {
		for (int z2 = 1; z2 <= m; z2++) {
			inp >> a[z1][z2];
		}
	}
	for (int y1 = 1; y1 <= n; y1++) {
		even = 0;
		odd = 0;
		for (int y2 = 1; y2 <= m; y2++) {
			if (a[y1][y2] % 2 == 0) {
				odd += 1;
			}
			else {
				even += 1;
			}
		}
		if (odd > even) {
			am += 1;
			an[am] = y1;
		}
	}
	
	otp << am << endl;

	for (int x = 1; x <= am; x++) {
		otp << an[x] << " ";
	}


	return 1;
}
*/