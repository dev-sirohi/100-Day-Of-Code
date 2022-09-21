// Brute Force
/*
#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    long long count = 0;
    for (long long i = 0; i < n - 1; i++) {
        for (long long j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    
    return count;
}
*/
