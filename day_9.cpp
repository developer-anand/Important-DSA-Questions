/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.*/
//Basic aaroach

#include<iostream>
using namespace std;

int binaryTodecimal(int n){
	int ans =0;
	int p = 1;
	int r;
		while(n>0){
			r = n%10;
			ans =ans+r*p;
			p = p*2;
			n= n/10;
		}return ans;
}
int main() {
	int n;
	cin>>n;
	cout<<binaryTodecimal(n);
	return 0;
}


//optimize approach

For binary number fedcba , Decimal number = f.2^5 + e.2^4 + d.2^3 + …..+ a.2^0.

The idea is to extract the digits of given binary number starting from right most digit and keep a variable decvalue.
At the time of extracting digits from the binary number, multiply the digit with the proper base (Power of 2)
and add it to the variable dec_value.
At the end, the variable decvalue will store the required decimal number.
Code:

public static int binaryToDecimal(int n) {
    int num = n;
    int dec_value = 0;

    // Initializing base  value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp > 0)  {
        int last_digit = temp % 10;  // Extract rightmost digit
        temp = temp / 10;               // Update the number

        dec_value += last_digit * base;  // Add the digit to the answer

        base = base * 2;               //Update the power of 2
    }

    return dec_value;                 // Return ans
}
