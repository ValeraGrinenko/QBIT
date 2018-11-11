/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

	long int a = 0, b = 0;
	bool neg = false;
	string n;

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	inp >> n;

	if (n[0] == '-') {
		neg = true;
		n = n.substr(1);
	}

	for (int i = 1; i < n.length(); i += 2) a += n[i] - '0';
	for (int i = 0; i < n.length(); i += 2) b += n[i] - '0';

	if ((n[n.length() - 1] - '0') % 2 == 0)
		a = a * 2;
	else
		b = b * 3;

	if (neg)
		a = a * 3;
	else
		b = b * 2;

	otp << a << ':' << b;

}
*/