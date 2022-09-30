#include <bits/stdc++.h>
using namespace std;

void solve(int n, int r, int b) {
	int p = r / (b + 1);
	int q = r % (b + 1);
	for (int i = 0; i < q; i++) {
		cout << string(p + 1, 'r') << 'b';
	}

	for (int i = q; i < b; i++) {
		cout << string(p, 'r') << 'b';
	}

	cout << string(p, 'r') << endl;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n, r, b;
		cin >> n >> r >> b;

		solve(n, r, b);
	}

	return 0;
}


/*

I don't understand this code at all. I came close with my first try but it didn't give the correct output.

THIS CODE NEEDS TO BE REVIEWED!!

*/
