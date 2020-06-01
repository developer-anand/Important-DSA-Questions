/*A Better Solution is to use sorting. Below are detailed steps.
1) Sort input array in increasing order.
2) If all elements are positive, then return product of last two numbers.
3) Else return maximum of products of first two and last two numbers.
Time complexity of this solution is O(nLog n). Thanks to Rahul Jain for suggesting this method.

An Efficient Solution can solve the above problem in single traversal of input array. The idea is to traverse the input array and keep track of following four values.
a) Maximum positive value
b) Second maximum positive value
c) Maximum negative value i.e., a negative value with maximum absolute value
d) Second maximum negative value.
At the end of the loop, compare the products of first two and last two and print the maximum of two products. Below is the implementation of this idea.

*/
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;

int MaxPairwiseProduct(const vector<int>& numbers) {
    long long result = 0;
    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
        	if(((long long)numbers[i]) * numbers[j] >result) {
        		result = ((long long) (numbers[i])) * numbers[j];
        	}
        }
    }
    return result;
}

long long MaxPairwiseProductFast(const vector<int>& numbers) {
	int n = numbers.size();

	int max_index1 = -1;
	for(int i=0; i<n; ++i){
		if(max_index1 == -1 || (numbers[i] >numbers[max_index1]))
			max_index1 = i;
	}
	int max_index2 = -1;
	for(int j=0; j<n; ++j)
		if(( j!=max_index1) && ((max_index2 == -1) || (numbers[j] >numbers[max_index2])))
			max_index2 = j;

		//cout<<max_index1<<' '<<max_index2<<"\n";

		return ((long long) (numbers[max_index1]))* numbers[max_index2];
	}

int main() {
	/*while(true) {
	int n = rand () % 4 + 2;
	cout<<n<<"\n";
	vector<int> a;
	for(int i=0; i<n; ++i) {
		a.push_back(rand() % 10);
	}
	for(int i=0; i<n; ++i) {
		cout<<a[i]<<" ";
	}
	cout<<"\n";

	long long res1 = MaxPairwiseProduct(a);
	long long res2 = MaxPairwiseProductFast(a);

	if(res1!=res2){
		cout<<"wrong answer "<<res1<<' '<<res2<<"\n";
		break;
	}
	else {
		cout<<"OK\n";
	}
}*/
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long result = MaxPairwiseProductFast(numbers);
    cout<<result<<"\n";	
    return 0;
}



