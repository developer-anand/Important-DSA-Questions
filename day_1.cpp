/*Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
*/
//Solution for single number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int remainder;
    int power = 1;
    int ans = 0;
        while(n>0){
            remainder = n%10;
            ans = ans+ power*remainder;
            power *= 2;
            n=n/10;
        }
            cout<<ans;
    return 0;
}


//Solution for list of numbers

#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int r;
	int n;


		while(N>0){
			int ans =0;
			cin>>n;
			int p = 1;

			while(n>0){
				r=n%10;
				ans=ans+r*p;
				p = p*2;
				n = n/10;
				}
		cout<<ans<<endl;
		N = N-1;
	}
	return 0;
}
