/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, ar[150], ans = 0, x = 0;
	
	inp >> N;

	for (int i = 0; i < N; i++) {
		inp >> ar[i];
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			ans += 1;
		}
		else {
			if (ar[i] != ar[i - 1]) {
				ans += 1;
			}
		}

	}

	otp << ans;

	return 1;
}
*/