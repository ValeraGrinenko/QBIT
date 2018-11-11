/*
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	long int a = 0, b = 0, c = 0, d = 0, sd = 0, ost = 0, sr = 0, s = 0, ds = 0, hpp = 0, kpp = 0;

	ifstream inp;
	inp.open("input.txt", ios::in);
	ofstream otp;
	otp.open("output.txt");
	inp >> a >> b >> c >> d;
	inp.close();
	cout << a << " " << b << " " << c << " " << d << endl;
	sr = a * 100 + b;
	sd = c * 100 + d;
	s = sd / sr;
	ds = s * sr;
	ost = sd - ds;
	hpp = ost / 100;
	kpp = ost - (hpp * 100);
	otp << s << endl << (int)hpp << " " << kpp;
	otp.close();

	return 0;
}
*/