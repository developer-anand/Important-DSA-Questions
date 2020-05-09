// CPP Program to print an arithmetic
// progression series
#include <bits/stdc++.h>
using namespace std;

void printAP(int a, int d, int n)
{

// Printing AP by simply adding d
// to previous term.
int curr_term;
curr_term=a;
for (int i = 1; i <= n; i++)
{ cout << curr_term << " ";
	curr_term =curr_term + d;

}
}

// Driver code
int main()
{
	// starting number
	int a = 2;

	// Common difference
	int d = 1;

	// N th term to be find
	int n = 5;

	printAP(a, d, n);

	return 0;
}


// CPP program to print GP.
#include <bits/stdc++.h>
using namespace std;

void printGP(int a, int r, int n)
{
	int curr_term;
	for (int i = 0; i < n; i++) {
		curr_term = a * pow(r, i);
		cout << curr_term << " ";
	}
}

// Driver code
int main()
{
	int a = 2; // starting number
	int r = 3; // Common ratio
	int n = 5; // N th term to be find
	printGP(a, r, n);
	return 0;
}

Arithmetic Progression
A sequence of numbers is said to be in an Arithmetic progression if the difference between any two consecutive terms is always the same. In simple terms, it means that the next number in the series is calculated by adding a fixed number to the previous number in the series. For example, 2, 4, 6, 8, 10 is an AP because difference between any two consecutive terms in the series (common difference) is same (4 - 2 = 6 - 4 = 8 - 6 = 10 - 8 = 2).



Facts about Arithmetic Progression :
Initial term: In an arithmetic progression, the first number in the series is called the initial term.
Common difference: The value by which consecutive terms increase or decrease is called the common difference.
The behavior of the arithmetic progression depends on the common difference d. If the common difference is:positive, then the members (terms) will grow towards positive infinity or negative, then the members (terms) will grow towards negative infinity.

Formula of nth term of an A.P :
If 'a' is the initial term and 'd' is the common difference.Thus, the explicit formula is:


Formula of sum of first n term of A.P:

General Formulas to solve problems related to Arithmetic Progressions: If ‘a’ is the first term and ‘d’ is the common difference:
nth term of an AP = a + (n-1)*d.
Arithmetic Mean = Sum of all terms in the AP / Number of terms in the AP.
Sum of ‘n’ terms of an AP = 0.5 n (first term + last term) = 0.5 n [ 2a + (n-1) d ].



Geometric Progression
A sequence of numbers is said to be in a Geometric progression if the ratio of any two consecutive terms is always same. In simple terms, it means that next number in the series is calculated by multiplying a fixed number to the previous number in the series.For example, 2, 4, 8, 16 is a GP because ratio of any two consecutive terms in the series (common difference) is same (4 / 2 = 8 / 4 = 16 / 8 = 2).


Facts about Geometric Progression :
Initial term: In a geometric progression, the first number is called the initial term.
Common ratio: The ratio between a term in the sequence and the term before it is called the "common ratio."
The behaviour of a geometric sequence depends on the value of the common ratio. If the common ratio is:
Positive, the terms will all be the same sign as the initial term.
Negative, the terms will alternate between positive and negative.
Greater than 1, there will be exponential growth towards positive or negative infinity (depending on the sign of the initial term).
1, the progression is a constant sequence.
Between -1 and 1 but not zero, there will be exponential decay towards zero.
-1, the progression is an alternating sequence.
Less than -1, for the absolute values there is exponential growth towards (unsigned) infinity, due to the alternating sign.

Formula of nth term of a Geometric Progression : If ‘a’ is the first term and ‘r’ is the common ratio. Thus, the explicit formula is:


Formula of sum of nth term of Geometric Progression:

General Formulas to solve problems related to Geometric Progressions:

If ‘a’ is the first term and ‘r’ is the common ratio:
nth term of a GP = a*rn-1.
Geometric Mean = nth root of product of n terms in the GP.
Sum of ‘n’ terms of a GP (r < 1) = [a (1 – rn)] / [1 – r].
Sum of ‘n’ terms of a GP (r > 1) = [a (rn – 1)] / [r – 1].
Sum of infinite terms of a GP (r < 1) = (a) / (1 – r).
