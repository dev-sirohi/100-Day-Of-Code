#include <bits/stdc++.h>
using namespace std;

void solve(int n, int arr[]) {
	bool condition_1 = false;
	bool condition_2 = true;
	int num;

	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			condition_1 = true;
			num = i;
			break;
		}

		if (i + 1 == n) {
			cout << "YES" << endl;
			return;
		}
	}

	if (condition_1) {
		for (int i = num + 1; i < n; i++) {
			if (arr[i] > arr[i - 1]) {
				condition_2 = false;
				break;
			}
		}
	}

	if (condition_2 || num + 1 == n) {
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
	return;

}

int main() {

	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		solve(n, arr);
	}

	return 0;
}
