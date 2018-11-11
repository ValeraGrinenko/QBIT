/*
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i<=sqrt(n); i++) 
        if (n % i == 0) 
            return false;   
    return true; 
}

int main() {

	int N = 0, a = 0;

	ifstream inp;
	ofstream otp;
	inp.open("input.txt");
	otp.open("output.txt");

	inp >> N;

	for (int i = 2; a < N; i++) {
		if (isPrime(i)) {
			otp << i << " ";
			a += 1;
		}
	}
		return 0;
}
*/