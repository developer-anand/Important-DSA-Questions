#include <iostream>
using namespace std;

int main() {

	int n;
	int a[1000] = {0};
	cin >> n;
	int product = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		product *= a[i];
	}
	int op[n];

	for (int i = 0; i < n; ++i)
	{
		op[i] = product / a[i];
		cout << op[i] << ",";
	}
	return 0;

}