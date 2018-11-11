/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, ar[150], ans = 0;

	inp >> N;

	for (int i = 0; i < N; i++) {
		inp >> ar[i];
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			continue;
		}
		else if (i != 0 && i != N - 1) {
			if (ar[i] > ar[i - 1] && ar[i] > ar[i + 1]) {
				ans += 1;
			}
			else {
				continue;
			}
		}
		else if (i == N - 1) {
			continue;
		}
		else {
			continue;
		}
	}

	otp << ans;

	return 1;
}
*/