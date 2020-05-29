//Given a sorted Array, Find Pair of Elements that sum to k (Given)
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
