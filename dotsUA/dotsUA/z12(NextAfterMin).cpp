/*
#include <fstream>
#include <iostream>
using namespace std;

//VGCode

int findMinInd(int n[], int N) {
	int min = 0, minI2 = 0, min2 = 0;
	for (int i = 0; i < N; i++) {
		if (n[i] < min) {
			min = n[i];
		}
		else if (n[i] > min && n[i] < min2) {
			min2 = n[i];
			minI2 = i;
		}
	}
	for (int i = 0; i < N; i++) {
		if (n[i] < min) {
			min = n[i];
		}
		else if (n[i] > min && n[i] < min2) {
			min2 = n[i];
			minI2 = i;
		}
	}
	return minI2;
}

int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int N = 0, minIn2 = 0, ar[200];

	inp >> N;

	for (int z = 0; z < N; z++) {
		inp >> ar[z];
	}

	minIn2 = findMinInd(ar, N);

	otp << ar[minIn2] << " " << minIn2 + 1;

	return 1;
}
*/