/*
#include <iostream>
#include <fstream>
using namespace std;
int Nod(int a, int b)
{
	while (b ^= a ^= b ^= a %= b);
	return a;
}
int main() {

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	long long int a = 0, b = 0, c = 0, d = 0, ans = 0, a1 = 0, b1 = 0, x = 0;

	inp >> a >> b >> c >> d;
	a1 = a;
	b1 = b;

	for (int i = 0; i > -1; i++) {
		if (i == 0) {
			if (a == c && b == d) {
				otp << i;
				break;
			}
			else {
				a += 1;
				b += 1;
				if (a == c && b == d) {
					otp << i;
					break;
				}
				else  {
					if (a % Nod(a, b) == 0 && b % Nod(a, b) == 0) {
						x = Nod(a, b);
						a /= x;
						b /= x;
						if (a == c && b == d) {
							otp << i + 1;
							break;
						}
					}
				}
			}
		}
		else {
			if (a == c && b == d) {
				otp << i;
				break;
			}
			else if (a == a1 && b == b1) {
				otp << 0;
				break;
			}
			else {
				a += 1;
				b += 1;
				if (a % Nod(a, b) == 0 && b % Nod(a, b) == 0) {
					x = Nod(a, b);
					a /= x;
					b /= x;
					if (a == c && b == d) {
						otp << i + 1;
						break;
					}
				}
			}
		}
		
		
		if (i > 1000000) {
			otp << 0;
			break;
		}
	}

	return 1;
}
*/