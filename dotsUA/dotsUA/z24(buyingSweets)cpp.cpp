/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int a[101], n = 0, max = 0, max1n[5], max2 = 0, max2n[5], x = 0, ans[10];

	inp >> n;

	for (int i = 0; i < n; i++) {
		inp >> a[i];
	}

	if (n == 4) {
		otp << 1 << ' ' << 2 << ' ' << 3 << ' ' << 4;
		return 0;
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 2; j < n - 1; j++) {
			if (a[i] + a[i + 1] + a[j] + a[j + 1] > max) {
				max = a[i] + a[i + 1] + a[j] + a[j + 1];
				ans[0] = i;
				ans[1] = i + 1;
				ans[2] = j;
				ans[3] = j + 1;
			}
		}
	}


	otp << ans[0] + 1 << " " << ans[1] + 1 << " " << ans[2] + 1 << " " << ans[3] + 1;
	
	
	return 1;
}
*/