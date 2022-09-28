#include <bits/stdc++.h>
using namespace std;

unsigned long long reverse(unsigned long long n) {
	unsigned long long rn = 0;
	unsigned long long mul = 1;
	unsigned long long n2 = n;

	while (n2) {
		n2 /= 10;
		mul *= 10;
	}

	n2 = n;
	while (n2) {
		unsigned long long digit = n2 % 10;
		rn += mul * digit;
		n2 /= 10;
		mul /= 10;
	}

	return rn / 10;
}

unsigned long long calc_pow(unsigned long long n, unsigned long long rn) {
	unsigned long long modulo = 1000000007;

	while (rn--) {
		n = (n * n) % modulo;
	}

	return n;
}

int main() {

	ios_base::sync_with_stdio(false);

	unsigned long long n;
	cin >> n;

	unsigned long long rn = reverse(n);
	cout << rn << endl;
	cout << calc_pow(n, rn) << endl;

	return 0;
}
