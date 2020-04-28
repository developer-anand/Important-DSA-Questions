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
    int n;
    cin>>n;
    int num;
    cin>>num;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
cout<<search(arr, num, n);

return 0;
 }
