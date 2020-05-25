/*Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n) {
	
	int min = INT_MIN;
	int max = INT_MAX;

	long long int res =0;

	while(n != 0){

		res *=10;
		res += n%10;
		n=n/10;
	}
	if(res<min || res>max)
		return 0;
	return res;
}

int main() {

	int n;
	cin>>n;

	cout<<reverseInteger(n);
	
return 0;
}
//leetcode solution
/*class Solution {
public:
    int reverse(int x) {
        int min =INT_MIN;
        int max =INT_MAX;
        
        long long int res =0;
        
        while(x!=0){
            res = res*10;//create space for next digit
            res += x%10; //add next digit
            x= x/10; //remove last digit
        }
            if(min >res || max <res)
                return 0;
            
          return res;
    }
};
*/
/*Remove duplicates from sorted array
Given a sorted array, the task is to remove the duplicate elements from the array.

Examples:

Input  : arr[] = {2, 2, 2, 2, 2}
Output : arr[] = {2}
         new size = 1

Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
Output : arr[] = {1, 2, 3, 4, 5}
         new size = 5



Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
Method 1: (Using extra space)

Create an auxiliary array temp[] to store unique elements.
Traverse input array and one by one copy unique elements of arr[] to temp[]. Also keep track of count of unique elements. Let this count be j.
Copy j elements from temp[] to arr[] and return j
filter_none
edit
play_arrow

brightness_4
// Simple C++ program to remove duplicates 
#include<iostream> 
using namespace std; 
  
// Function to remove duplicate elements 
// This function returns new size of modified 
// array. 
int removeDuplicates(int arr[], int n) 
{ 
    // Return, if array is empty 
    // or contains a single element 
    if (n==0 || n==1) 
        return n; 
  
    int temp[n]; 
  
    // Start traversing elements 
    int j = 0; 
    for (int i=0; i<n-1; i++) 
  
        // If current element is not equal 
        // to next element then store that 
        // current element 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously 
    temp[j++] = arr[n-1]; 
  
    // Modify original array 
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // removeDuplicates() returns new size of 
    // array. 
    n = removeDuplicates(arr, n); 
  
    // Print updated array 
    for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
  
    return 0; 
} 

Output:
1 2 3 4 5
Time Complexity : O(n)
Auxiliary Space : O(n)

Method 2: (Constant extra space)
Just maintain a separate index for same array as maintained for different array in Method 1.

filter_none
edit
play_arrow

brightness_4
// C++ program to remove duplicates in-place 
#include<iostream> 
using namespace std; 
  
// Function to remove duplicate elements 
// This function returns new size of modified 
// array. 
int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    // To store index of next unique element 
    int j = 0; 
  
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // removeDuplicates() returns new size of 
    // array. 
    n = removeDuplicates(arr, n); 
  
    // Print updated array 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
  
    return 0; 
} 

Output:
1 2 3 4 5
Time Complexity : O(n)
Auxiliary Space : O(1)

*/