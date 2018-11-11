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

	double N = 0, K = 0, ba = 0, sa = 0, ans = 0;

	//6x+8x*K = N, x(6+8K) = N, x = N/(6 + 8K), y = (N-6x)/8, ans = x+y

	inp >> N >> K;

	ans = K * N / (8 + 8 * K) + K * N / (6 * K + 6 * K*K);
	if ((!ans % 1) != 0) {
		otp << '0';
	}
	else {
		otp << ans;
	}

	return 1;
}
*/