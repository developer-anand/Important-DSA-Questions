//We have to  print an array as spiral


#include<bits/stdc++.h>
using namespace std;


void spiralPtint(int a[][1000],int m,int n){
        int start_row=0;
        int start_col=0;
        int end_row=m-1;
        int end_col=n-1;

        while(start_row<=end_row and start_col<=end_col){
            //First Row
            for(int i= start_col;i<end_col; i++){
                cout<<a[start_row][i]<<" ";
            }
            start_row++;
            for(int i=start_row; i<end_row; i++){
                cout<<a[i][end_col]<<" ";
            }end_col--;

            if(end_row>start_row){
                    for(int i=end_col; i<start_col; i++){
                    cout<<a[end_row][i]<<" ";
                    }end_row--;}

            if(end_col>start_col){
                for(int i=end_row;i<start_row; i++){
                cout<<a[i][start_col]<<" ";
            }start_col++;}

        }
}

int main(){

    int a[1000][1000]= {0};
    int m, n;
    cin>>m>>n;

    //Iterate over the array
    int val=1;
    for(int row=0; row<m-1; row++){
        for(int col=0; col<n-1; col++){
            a[row][col]=val;
            val+=1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    spiralPtint(a,m,n);
return 0;
}
