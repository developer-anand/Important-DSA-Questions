/*Selection Sort: Arrange a randomly shuffled array in increasing or decreasing order.
Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.




Following example explains the above steps:



arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64
*/


#include<iostream>
using namespace std;


void selection_Sort(int a[], int  n){

        for(int i=0; i<n-1; i++){
            //Find out the smallest element index in the unsorted array
            int min_index = i;
            for(int j=i; j<n-1; j++){
                if(a[j]< a[min_index]){
                    min_index = j;
                }
            }
            //After this loop we can apply swap
            swap(a[i], a[min_index]);
        }

        }

int main(){
    int n;
    cin>>n;
    int a[1000];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    selection_Sort(a, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<",";
        }
return 0;
}


/*In the selection sort technique, the list is divided into two parts. In one part all elements are sorted and in another part the items are unsorted. At first we take the maximum or minimum data from the array. After getting the data (say minimum) we place it at the beginning of the list by replacing the data of first place with the minimum data. After performing the array is getting smaller. Thus this sorting technique is done.

The complexity of Selection Sort Technique
Time Complexity: O(n2)

Space Complexity: O(1)

Input − The unsorted list: 5 9 7 23 78 20
Output − Array after Sorting: 5 7 9 20 23 78
Algorithm
selectionSort(array, size)
Input: An array of data, and the total number in the array

Output: The sorted Array

Begin
   for i := 0 to size-2 do //find minimum from ith location to size
      iMin := i;
      for j:= i+1 to size – 1 do
         if array[j] < array[iMin] then
            iMin := j
      done
      swap array[i] with array[iMin].
   done
End
Example Code
#include<iostream>
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
Output
Enter the number of elements: 6
Enter elements:
5 9 7 23 78 20
Array before Sorting: 5 9 7 23 78 20
Array after Sorting: 5 7 9 20 23 78*/
