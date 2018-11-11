/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

	int N = 0, Z = 0;

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");
	inp >> N;
	string Nc = to_string(N);
	for (int i = 0;i < 5;i++) {
		if (Nc[i] == '0') {
			Z += 1;
		}
		else {
			continue;
		}
	}
	otp << Z;
	inp.close();
	otp.close();

	return 0;
}
*/