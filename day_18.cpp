#include<iostream>
using namespace std;

void spiral_print(int a[][1000],int m,int n){
            int sta_row =0;
            int sta_col = 0;
            int end_row = m-1;
            int end_col = n-1;


            //Print it
            while(sta_row<=end_row and sta_col<=end_col){
                    //Print first ROW
                        for(int i=sta_col; i<=end_col; i++){
                        cout<<a[sta_row][i]<<" ";
                        }sta_row++;
                    //For last coloumn
                        for(int i=sta_row; i<=end_row; i++){
                            cout<<a[i][end_col]<<" ";
                        }   end_col--;
                    //For last row
                        for(int i=end_col; i>=sta_col; i--){
                            cout<<a[end_row][i]<<" ";
                            }end_row--;
                    //Start coloumn

                        for(int i=end_row; i<=sta_row; i--){
                            cout<<a[i][sta_col]<<" ";
                            }  sta_col++;
}
}
int main(){
    int a[1000][1000]={0};
    int m,n;
    cin>>m>>n;

    int val=1;
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            a[row][col] = val;
            val=val+1;
            cout<<a[row][col]<<",";
        }cout<<endl;
    }
    spiral_print(a,m,n);
return 0;
}
