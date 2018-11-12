/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	int n = 0, s1 = 0, s2 = 0;
	vector<unsigned int> a;
	inp >> n;
	
	while (n--) {
		unsigned int temp;
		inp >> temp;
		s1 += temp;
		a.push_back(temp);
	}

	unsigned long step = a.size() - 1;
	long long k = -1;

	while (step) {
		s1 -= a[step];
		s2 += a[step];
		if (s2 == s1) {
			k = step;
		}
		step--;
	}

	otp << k;


	return 1;
}
*/