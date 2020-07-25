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