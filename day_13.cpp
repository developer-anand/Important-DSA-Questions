//Linear Search
//Problem: Given an array arr[] of n elements, write a function to search a given elements x in arr[].
#include<bits/stdc++.h>
using namespace std;


int search(int arr[],int num, int n){
    for(int i=0;i<n; i++){
        if(arr[i]==num){
        return i;}
    }
return -1;
}


int main(){

    int arr[1000];
    int n, key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    //Ask for the element we want to search
    cout<<"Enter element to search :";
    cin>>key;
cout<<search(arr, num, n);

return 0;
 }



//Linear Search
//Problem: Given an array arr[] of n elements, write a function to search a given elements x in arr[].
#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[1000];
    int n, key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    //Ask for the element we want to search
    cout<<"Enter element to search :";
    cin>>key;
    //Find out the index of that element by traversing the array
    Linear search algoritham
       int i;
    for(int i=0; i<n; i++){
        if(key==a[i]){
            cout<<"the element present at "<<i<<" index";
            break;
        }
    }
        if(i==n){
            cout<<"element is not present in array";
        }
return 0;
 }
