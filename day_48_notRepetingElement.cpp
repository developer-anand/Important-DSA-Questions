//find number which is not repeting
//given a list of numbers where every number occurs twice except one number

#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int no;
	int ans = 0;

	//Bitwise XOR to solve without using any space;
	for (int i = 0; i < n; i++) {
		cin >> no;
		ans = ans ^ no;
	}
	cout << ans << "\n";

	return 0;
}