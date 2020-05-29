/*Two pointers is really an easy and effective technique which is typically used for searching pairs in a sorted array.

Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.
//Given a sorted Array, Find Pair of Elements that sum to k (Given)

How does this work?
The algorithm basically uses the fact that the input array is sorted. We start the sum of extreme values (smallest and largest) and conditionally move both pointers. We move left pointer i when the sum of A[i] and A[j] is less than X. We do not miss any pair because the sum is already smaller than X. Same logic applies for right pointer j.
*/
#include<iostream>
using namespace std;

int main() {

	int a[] = {1,3, 5, 7, 10, 11, 12, 13};
	int key = 16;
//We will use two pointer Approach
//We will keep two variable i(at beginning of array) and j(at end of array) and we will try to add this element 
//So we will move i to the forward and do some a[i] + a[j] 
//when we find one pair we will move both i and j
//if sum is greater than the required key then we move j as j--
		
		int i = 0;
		int j = sizeof(a)/sizeof(int) - 1;

		while(i<j) {
			int current_sum = a[i] + a[j];
			if(current_sum>key) {
				j--;
			}
			else if(current_sum<key){
				i++;
			}
			else if(current_sum==key){
				cout<<a[i]<<","<<a[j]<<"\n";
				i++;
				j--;
			}
		}
}
