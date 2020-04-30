/*In computer science, binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. Wikipedia
Worst complexity: O(log n)
Average complexity: O(log n)
Best complexity: O(1)
Space complexity: O(1)
Data structure: Array
*/
//Binary Search: Efficient way to search in sorted array and lot more
 #include<bits/stdc++.h>
 using namespace std;

 int binary_Search(int a[], int n, int key){
     int s = 0;
     int e = n-1;

      while(s<=e){
        int mid = (s+e)/2;

        if(a[mid] == key){
            cout<<"element present at location :"<<mid;
        }
       else if(a[mid]>key){
            e=mid-1;
       }
       else{
        s=mid+1;
       }
      }return -1;
    }





 int main(){
    int n, key;
    cin>>n;
    int a[1000];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter element to search "<<endl;
    cin>>key;

    cout<<binary_Search(a, n ,key);
    return 0;
 }
