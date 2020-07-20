Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]

//Solution 

#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int arr[]={4,3,2,7,8,2,3,1} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	

	sort(arr, arr+n);
	for(int i=0;i<n-1;i++){
		

			if(arr[i]==arr[i+1]){
					cout<<arr[i]<<" ";
			}
		}
return 0;
}

//Optimized Solution



class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> res;
        int index = 0;
        for(int i=0; i<nums.size(); i++) {
            index = abs(nums[i])-1;
            if(nums[index] < 0) {
                res.push_back(abs(index+1));
            }
            nums[index] = -nums[index];  
        }
        return res;
    }
};
