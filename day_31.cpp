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
	ios::sync_with_stdio(0); 
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int arr[1000];
	int n; 
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// removeDuplicates() returns new size of 
	// array. 
	cout<<removeDuplicates(arr, n); 


	return 0; 
} 
