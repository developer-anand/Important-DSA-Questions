#include<bits/stdc++.h>
using namespace std;


vector<int> missing_element(vector<int> vec){

	std::vector<int> mis;

	for (int i = 0; i <vec.size(); ++i)
	{
		int temp = abs(vec[i]) -1;

		vec[temp] = vec[temp] > 0 ? -vec[temp] : vec[temp];
	}

	for(int i=0; i<vec.size(); i++){
		if (vec[i]>0)
		{
			mis.push_back(i+1);
		}
	}
	return mis;
}

int main() {

	vector<int> vec{4,3,2,7,8,2,3,1};

	vector<int> miss_ele = missing_element(vec);

	for (int i = 0; i <miss_ele.size(); i++)
	{
		cout<<miss_ele[i]<<" ";
	}
}

//Optimize 
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> output;
        
        for (int i= 0; i<nums.size(); i++){
            
            int idx = abs(nums[i]) -1;
            
            if(nums[idx]>0){
                nums[idx] = -abs(nums[idx]);
            }
            
        }
        
        for (int j=0; j<nums.size(); j++){
            if (nums[j]>0){
                output.push_back(j+1);
            }
        }
       

        return output;
        
        
    }
};
