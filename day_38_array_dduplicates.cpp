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