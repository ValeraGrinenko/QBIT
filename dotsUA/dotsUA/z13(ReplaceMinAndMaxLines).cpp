/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, M = 0, ar[150][150], min = 1001, max = -1001, minL = 0, maxL = 0, artr[150];

	inp >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < M; ii++) {
			inp >> ar[i][ii];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < M; ii++) {
			if (ar[i][ii] < min) {
				min = ar[i][ii];
				minL = i;
			}
			else if (ar[i][ii] >= max) {
				max = ar[i][ii];
				maxL = i;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		artr[i] = ar[minL][i];
	}

	for (int i = 0; i < M; i++) {
		ar[minL][i] = ar[maxL][i];
	}

	for (int i = 0; i < M; i++) {
		ar[maxL][i] = artr[i];
	}

	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < M; ii++) {
			otp << ar[i][ii] << " ";
		}
		otp << endl;
	}

	return 1;
}
*/