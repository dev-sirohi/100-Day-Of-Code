#include <bits/stdc++.h>
using namespace std;

void solution(int arr[], int n) {
	bool flag = true;

	unordered_map<int, int> map;

	for (int i = 0; i < n; i++) {
		if (map.find(arr[i]) != map.end()) {
			int val = map[arr[i]];
			map[arr[i]] = ++val;
		} else {
			map.insert(pair<int, int>(arr[i], 1));
		}
	}

	vector<int> vec;

	if (!n & 1) {
		for (auto i : map) {
			if (i.second & 1) {
				flag = false;
				break;
			}
		}
	} else {
		int count = 0;
		for (auto i : map) {
			if (i.second & 1) {
				bool has = false;
				for (auto& it : vec) {
					if (it == i.first) {
						has = true;
					}
				}

				if (!has) {
					vec.push_back(i.first);
					count++;
				}
			}

			if (count > 1) {
				flag = false;
				break;
			}
		}
	}

	if (flag) cout << "YES!" << endl;
	else cout << "NO!" << endl;

}

int main() {

	ios_base::sync_with_stdio(false);

	int arr[5] = {6, 6, 8, 7, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	solution(arr, n);

	return 0;
}
