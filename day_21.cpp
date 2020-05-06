/*Problem:
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format
Single integer N denoting number of lines of the pattern.

Constraints
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004
Explanation
If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.


*/
#include<iostream>
using namespace std;

int main(){

     int n,i,j;
     cin>>n;
     cout<<"1\n";
     if(n!=1)
     {
          for(i=1;i<n;i++)
          {
               cout<<i;
               for(j=1;j<i;j++)
                    cout<<"0";
               cout<<i;
               cout<<"\n";
          }
     }
return 0;
}
