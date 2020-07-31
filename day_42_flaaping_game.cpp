#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int ones = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    ones += arr[i];
    arr[i] = arr[i] == 1 ? -1 : 1;
  }

  if (ones == n)
    cout << n - 1;
  else {
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      sum = max(0, sum + arr[i]);
      ans = max(sum, ans);
    }
    cout << (ones + ans);
  }
}

