#include<bits/stdc++.h>
using namespace std;

int maxArray(long long int arr[], unsigned int n, int mx) {
	for (int i = 0; i < n; i++) {
		mx = arr[i] > mx ? mx = arr[i] : mx;
	} return mx;
}
int main() {
	unsigned int n;
	cin >> n;
	long long int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} int mx = arr[0];
	cout << maxArray(arr, n, mx);
	return 0;
}

//Editorial
For the case arr= {20, 10, 20, 4, 100}, max element is 100.

                  Time complexity : o(n), where n is the size of the array. Worst case is when max element is present at the end of the array.

	Algorithm:

1.Initialize max variable with minimum value of integer or with 0th element of the array say arr.
2.Iterate over each element of the array
2.1 if arr[i] > max then // updating max when the array element at ith location is greater than max
	max = arr[i]
	      3.After end of the loop max is having the maximum element of the array.
	      4.Print max.

