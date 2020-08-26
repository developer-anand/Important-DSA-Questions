Find middle point mid = (l + h) / 2
                        If key is present at middle point, return mid.
                                Else If arr[l...mid] is sorted
                                (a) If key to be searched lies in range from arr[l] to arr[mid], recur for arr[l...mid].
	                                (b) Else recur for arr[mid + 1...r]
		                                Else (arr[mid + 1..r] must be sorted) .
		                                a) If key to be searched lies in range from arr[mid + 1] to arr[r], recur for arr[mid + 1..r].
		b) Else recur for arr[l..mid]

#include<iostream>
			using namespace std;

				int* getArray(int n) {
			int *arr = new int[n];
				for (int i = 0; i < n; ++i) {
					cin >> arr[i];
				}
				return arr;
				}

int findPivot(int *arr, int low, int high) {
	if (low > high) {
		return -1;
	}
	else if (low == high) {
		return low;
	}
	int mid = (low + high) / 2;
	if (mid < high && arr[mid] > arr[mid + 1]) {
		return mid;
	}
	if (mid > low && arr[mid] < arr[mid - 1]) {
		return mid - 1;
	}
	if (arr[low] >= arr[mid]) {
		return findPivot(arr, low, mid - 1);
	}
	return findPivot(arr, mid + 1, high);
}

int main() {
	int n;
	cin >> n;
	int *arr = getArray(n);
	int pivot = findPivot(arr, 0, n - 1);
	cout << pivot << endl;
	return 0;
}

// #include<iostream>
// using namespace std;

// int searchInRotatedSortedArray(int arr[], int s, int e, int key) {
// 	int mid = (s + e) / 2;
// 	if (s > e)
// 	{
// 		return -1;
// 	}
// 	//case1
// 	if (arr[mid] == key)
// 	{
// 		return mid;
// 	}
// 	//case2
// 	if (arr[s] <= arr[mid])
// 	{
// 		if (key >= arr[s] and key < arr[mid])
// 		{
// 			return searchInRotatedSortedArray(arr, s, mid - 1, key);
// 		}
// 		else {
// 			return searchInRotatedSortedArray(arr, mid + 1, e, key);
// 		}
// 	}
// 	if (key >= arr[mid] and key < arr[e])
// 	{
// 		return searchInRotatedSortedArray(arr, mid + 1, e, key);
// 	}
// 	else {
// 		return searchInRotatedSortedArray(arr, s, mid - 1, key);
// 	}
// 	return -1;
// }

// int main() {
// 	int n; cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin >> arr[i];
// 	}
// 	int s = 0, e = n - 1;
// 	int key; cin >> key;
// 	cout << searchInRotatedSortedArray(arr, s, e, key);

// 	return 0;
// }
#include<iostream>
using namespace std;

	int main()
{
//int arr[] = {6,7,1,2,3,4,5};
//int n = sizeof(arr)/sizeof(int);
int n;
cin >> n;
int arr[1000000];
for (int i = 0; i < n; i++)
{
	cin >> arr[i];
}
int s = 0;
int e = n - 1;
/*if (arr[0]<=arr[n-1])
{
	cout<<"pivot not";
}
else
{*/
while (s <= e)
{
	int m = (s + e) / 2;
	if (arr[m] > arr[m + 1] && m < e)
	{
		cout << m << " ";
		break;
	}
	if (arr[m] < arr[m - 1] && m > s)
	{
		cout << m - 1 << " ";
		break;
		//e = m-1;
	}
	//else
	if (arr[s] >= arr[m])
	{
		//s = m+1;
		e = m - 1;
	}
	else
	{
		s = m + 1;
	}
}
return 0;
}