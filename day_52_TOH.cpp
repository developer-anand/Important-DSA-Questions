#include<iostream>
using namespace std;

void towerOfHanoi(int n, char S, char E, char A) {
	//case 1
	if (n == 1) {
		cout << "move 1 from " << S << " to " << E << endl;
		return;
	}
	towerOfHanoi(n - 1, 'S', 'A', 'E');
	cout << n << "from " << 'S' << " to " << 'E' << endl;
	towerOfHanoi(n - 1, 'A', 'E', 'S');
	return;
}
int main() {
	int n;
	cin >> n;
	char A, B, C;

	towerOfHanoi(n, A, C, B);
	return 0;
}