//When we have to generate all the sub arrays

/*#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];

    for(int i=0; i<n; i++){
            cin>>a[i];}
//Generate all sub arrays
        for(int i=0; i<n; i++){
                for(int j=i; j<n; j++){
            //Printing all elements of sub arrays(i,j)
                    for(int k=i;k<=j;k++){
                        cout<<a[k]<<",";
                }cout<<endl;
            }
        }
    return 0;
}
*/

//Maximum sub-array sum
//Method-1

/*#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
      int max_sum=0;
      int cur_sum=0;
    int a[1000];

//To find MAx sub array
    int left_index = -1;
    int right_index = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
            //int max_sum=0;
            //int cur_sum=0;
        for(int j=i; j<n; j++){
                cur_sum=0;
            for(int k=i; k<=j; k++){
                cur_sum+=a[k];
            }
            //Update the max_sum if cur_sum>max_sum
        if(max_sum<cur_sum){
            max_sum=cur_sum;
            left_index=i;
            right_index=j;
    }
  }
}
    //Print max_sum;
    cout<<"Maximum sum is "<<max_sum<<endl;
    //Print the sub_array
    for(int k=left_index; k<=right_index; k++){
        cout<<a[k]<<",";
    }
return 0;
}

*/
//Cumulative sum
//complexity = O(n^2)
/*
#include<iostream>
using namespace std;

int main(){
     int n;
    cin>>n;
      int max_sum=0;
      int cur_sum=0;
    int a[1000];
    int cumSum[1000]={0};

//To find MAx sub array
    int left_index = -1;
    int right_index = -1;

    cin>>a[0];
    cumSum[0] = a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }

    for(int i=0;i<n;i++){

        for(int j=i; j<n; j++){
                cur_sum=0;

                cur_sum =cumSum[j] + cumSum[i-1];
            for(int k=i; k<=j; k++){
                cur_sum+=a[k];
            }
            //Update the max_sum if cur_sum>max_sum
        if(max_sum<cur_sum){
            max_sum=cur_sum;
            left_index=i;
            right_index=j;
    }
  }
}
    //Print max_sum;
    cout<<"Maximum sum is "<<max_sum<<endl;
    //Print the sub_array
    for(int k=left_index; k<=right_index; k++){
        cout<<a[k]<<",";
    }
return 0;
}
*/

//MAXIMUM SUM using KADANE's Algo
//O(n) complexity

# include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[1000];
    int cs = 0;
    int ms = 0;

    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    //Kadane's algo
    for(int i=0; i<n; i++){
        cs = cs + a[i];
        if(cs<0){
            cs = 0;
        }

        ms = max(cs,ms);
    }
    cout<<"Maximum_sum is"<<ms;

    return 0;
}
