//2D ARRAYS
//Simple Examgle
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
        int a[1000][1000]={0};
        int m, n;
        cin>>m >> n;

        //Iterate over the array
        int val = 1;
        for(int row=0; row< m-1; row++){
            for(int col=0; col< n-1;col++){
                a[row][col] = val;
                val=val+1;

            cout<<a[row][col]<<" ";
            }cout<<"\n";
        }







    return 0;
}
*/

//Wave Print of 2d Array
//We will construct a 2D array and then iterate over column and then for each column we will traverse the row either in the top to down direction or bottom to top direction
//If the column number is even like 0,2... then we will traverse in top to bottom direction else if column no is odd then we will traverse in bottom to top direction


#include<bits/stdc++.h>
using namespace std;

int main(){
        int a[1000][1000]={0};
        int m, n;
        cin>>m >> n;

        //Iterate over the array
        int val = 1;
        for(int row=0; row< m-1; row++){
            for(int col=0; col< n-1;col++){
                a[row][col] = val;
                val=val+1;
            cout<<a[row][col]<<" ";
            }cout<<"\n";
        }
//Wave print
        //we have to keep the column fixed and then changed the row
        //So Outer loop will be column loop and inner loop will be row loop
        for(int col=0; col<n; col++){

            if(col%2==0){
                //Even col top to down
                for(int row=0;row<m; row++){
                    cout<<a[row][col];
                }
            }
            else{
                //Bottom Up Direction
                for(int row=m-1; row>=0; row--){
                    cout<< a[row][col] <<" ";
                }
            }
        }

return 0;
}
