#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n) {
	sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int real_sum = (n * (n + 1)) / 2;
    int dup;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            dup = arr[i];
        }
    }
    
    pair<int, int> pr;
    
    pr.second = dup;
    pr.first = (real_sum - sum) + dup;
    
    return pr;
}

/*

Implementation of find_the_repeating_numbers

*/
