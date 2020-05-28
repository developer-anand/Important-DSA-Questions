// // #include<bits/stdc++.h>
// // using namespace std;

// // int main(){
// // 	int n;
// // 	cin>>n;
// // 	int a[1000];
// // 	int currentSum = 0;
// // 	int maxmimumSum = 0;
// // 	int left = -1;
// // 	int right = -1;
// // 	for(int i=0; i<n; i++) {
// // 		cin>>a[i];
// // 	}

// // 	for(int i=0; i<n; i++) {
// // 		for(int j=i; j<n; j++) {
// // 			//everytime we should initilizr cSum =0 for new subarray
// // 				int currentSum = 0;
// // 			for(int k=i; k<=j; k++){
// // 				currentSum += a[k];
// // 			}
// // 			//UPdate maxSum if cSum>maxsumm
// // 				if(currentSum > maxmimumSum){
// // 					maxmimumSum = currentSum;
// // 					left = i;
// // 					right = j;
// // 				}
// // 			}
// // 		}
// // 		cout<<"maxmimumSum is: "<<maxmimumSum<<"\n";
// // 			//print the maximum subarray
// // 				for(int k=left; k<=right; k++) {
// // 					cout<<a[k]<<",";
// // 				}
// // 		return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[1000];
// 	int cumSum[1000] = {0};
// 	int currentSum = 0;
// 	int maxmimumSum = 0;
// 	int left = -1;
// 	int right = -1;

// 	cin>>a[0];
// 	cumSum[0] = a[0];

// 	for(int i=1; i<n; i++) {
// 		cin>>a[i];
// 		cumSum[i] = cumSum[i-1] + a[i];
// 	}

// 	for(int i=0; i<n; i++) {
// 		for(int j=i; j<n; j++) {
// 			//everytime we should initilizr cSum =0 for new subarray
// 				int currentSum = 0;
// 			// for(int k=i; k<=j; k++){
// 			// 	currentSum += a[k];
// 			// }
// 				currentSum = cumSum[j] - cumSum[i-1];

// 			//UPdate maxSum if cSum>maxsumm
// 				if(currentSum > maxmimumSum){
// 					maxmimumSum = currentSum;
// 					left = i;
// 					right = j;
// 				}
// 			}
// 		}
// 		cout<<"maxmimumSum is: "<<maxmimumSum<<"\n";
// 			//print the maximum subarray
// 				for(int k=left; k<=right; k++) {
// 					cout<<a[k]<<",";
// 				}
// 		return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int cs=0;
	int ms=0;

	int a[1000];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	for(int i=0; i<n; i++) {
		cs = cs + a[i];
		if(cs<0){
			cs = 0;
		}
		ms = max(cs , ms);
	}
	cout<<"maximum is "<<ms<<endl;

	return 0;
}
