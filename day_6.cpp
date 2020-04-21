/*Question
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific
*/


//basic solution
#include<bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin>>n;
    if(n>=2){
        if(n%2!=0){
            cout<<"Prime";
        }
        else{
            cout<<"Not Prime";
        }
    }
return 0;
 }
/*Any number which has only two divisors, one divisor is the number itself and other divisor is 1, is called as Prime number.


Algorithmn

Take input of the number.
put a loop from 2 to that number.
If the number gets divided by any number in the loop, that means the number is not Prime.
Othewise, Prime.
Code


public static boolean isPrime(int n) {

        if (n <= 1)
            return false;

        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

        return true;
}
*/
