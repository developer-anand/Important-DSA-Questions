/*Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26
100 37

Input Format
The first line of the input contains an integer denoting the Minimum Fahrenheit value. The second line of the input contains an integer denoting the Maximum Fahrenheit value. The third line of the input contains an integer denoting the Step.

Constraints
0 < Min < 100 Min < Max < 500 0 < Step

Output Format
Print Fahrenheit and Celsius values separated by a tab. Each step should be printed in a new line.

Sample Input
0
100
20
Sample Output
0 -17
20 -6
40 4
60 15
80 26
100 37
Explanation
First number in every output line is fahrenheit, second number is celsius. The two numbers are separated by a tab.

*/
#include<iostream>
using namespace std;
int main() {
	int f;
	cin>>f;
	int fmax;
	cin>>fmax;
	int step;
	cin>>step;
	while(f<=fmax){
		int c= (5*(f-32))/9;
			cout<<f<<" "<<c<<endl;
			f=f+ step;
		}

	return 0;
}
/*
Formula to convert an number n in Fahrenheit to Celsius is : (5 / 9) * (n - 32).
This problem is quite easy for everyone, but still this question has a important point to ponder.viz, Obviously you all are taking int datatype to store the number n whose conversion is to found.
About that, when you are putting n in the formula and calculating the answer you will get 0 as the ans.
That's because 5 / 9 is zero as 5 is int by default and 9 is also int by default so when you divide an int by an int you get an int and 5 / 9 is 0.555 in terms of decimal but 0 in int.
So you need to convert the either 5 or 9 to float so that when you divide a float by an int you would get a float viz, 0.55 instead of 0.
But now the number become float so you need to convert it into int by type casting.
Finally the Formula becomes: (int)((5.0/9) * (n - 32)).

Code
JAVA Solution

public static void convert(int ll, int ul,int step){

       for(int i=ll;i<=ul;i=i+step){
            int c=(int)((5.0/9)*(i-32));

            System.out.println(i+ "\t" +c);
        }
}

C++ Solution

void convert(int ll, int ul,int step){

       for(int i=ll;i<=ul;i=i+step){
            int c=(int)((5.0/9)*(i-32));

        cout<<i<<"\t"<<c<<endl;
        }
}


*/




return 0;
}
