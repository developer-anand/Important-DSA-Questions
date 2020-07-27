#include<bits/stdc++.h>

using namespace std;

// int max_sub_array(vector<int> v){

// 	int max_so_far = INT_MIN;
// 	int max_ending_here = 0;
	
// 	for(int i=0; i<size().v; i++){

// 		max_ending_here = max_ending_here+v[i];
// 		if(max_so_far<max_ending_here){
// 			max_so_far=max_ending_here;
// 		}
// 		if(max_ending_here<0){
// 			max_ending_here = 0;
// 		}
// 	}
// 	return max_so_far;
// }

// int main() {

// 	vector<int>v {-2,1,-3,4,-1,2,1,-5,4};
// 	 //int n = sizeof(a)/sizeof(a[0]); 
//     int max_sum = max_sub_array(vecto<int> v); 
//     cout << "Maximum contiguous sum is " << max_sum; 
//     return 0;
	
// }
int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
  
/*Driver program to test maxSubArraySum*/
int main() 
{ 
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(a)/sizeof(a[0]); 
    int max_sum = maxSubArraySum(a, n); 
    cout << "Maximum contiguous sum is " << max_sum; 
    return 0; 
}

///leetcode
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current_sum = 0;
        int max_sum_so_far = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            current_sum = max(current_sum + nums[i], nums[i]);
            max_sum_so_far = max(current_sum, max_sum_so_far);
        }return max_sum_so_far;
    }
};