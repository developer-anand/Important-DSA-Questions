/*Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

Algo
We basically ignore half of the elements just after one comparison.

Compare item with the middle element.
If item matches with middle element, we return the mid index.
Else If item is greater than the mid element, then item can only lie in right half subarray after the mid element. So we search for right half.
Else (item is smaller) search for the left half.
Figure

Lang - Cpp
Required Binary Search program is given below :



#include <stdio.h>
#include<iostream>
using namespace std;

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}

int main(void)
{
    int n;
    cin >> n;
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int num;
    cin >> num;
    int result = binarySearch(arr, 0, n-1, num);
    (result == -1)? printf("%d", -1)
            : printf("%d",result);
    return 0;
}
Lang - Java

 public static int search(int[] arr, int item){

        int lo = 0;
        int hi = arr.length - 1;

        while(lo <= hi){

            int mid = (lo + hi) / 2;

            if(arr[mid] > item) hi = mid - 1;
            else if(arr[mid] < item) lo = mid + 1;
            else return mid;
        }

        return -1;
    }
*/
#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key) {
	int s = 0, l = n - 1, mid;

	while (s <= l) {
		mid = (s + l) / 2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] > key)
			l = mid - 1; //Change 1
		if (arr[mid] < key)
			s = mid + 1; //Change 2
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cin >> key;
	cout << binarysearch(arr, n, key);

}
