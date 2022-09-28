#include <bits/stdc++.h>
using namespace std;


void solve(long long n, vector<long long> vec) {
	vector<long long> final_vec;
	for (long long i = 1; i <= n; i++) {
		final_vec.push_back(i);
	}

	long long p1 = 0;
	long long p2 = 1;
	long long count = 0;

	if (vec[p1] != vec[p2]) {
		cout << -1 << endl;
		return;
	}

	while (p2 < n) {
		if (vec[p1] == vec[p2]) {
			count = 0;
			long long temp = final_vec[p1];
			final_vec[p1] = final_vec[p2];
			final_vec[p2] = temp;
			p2++;
		} else {
			count++;
			p1 = p2;
			p2 = p2 + 1;
		}

		if (count > 1) {
			cout << -1 << endl;
			return;
		}
	}

	if (vec[p2 - 2] != vec[p2 - 1]) {
		cout << -1 << endl;
		return;
	}

	for (long long i = 0; i < n; i++) cout << final_vec[i] << " ";

	cout << endl;
}

int main() {

	ios_base::sync_with_stdio(false);

	long long t;
	cin >> t;

	while (t--) {
		long long n, j;
		cin >> n;
		vector<long long> vec;
		for (long long i = 0; i < n; i++) {
			cin >> j;
			vec.push_back(j);
		}

		solve(n, vec);
	}

	return 0;
}
