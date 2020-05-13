Sahil is in the mood to attend Geeks Classes. He reaches venue of Geeks Classess. Now, he is confused about his sitting place. There are two columns of students sitting in the classes. Each student has been assigned a score on the basis of their score in Geeks Class Entrance Contest. Now, he wants to sit in the row which contains students with maximum score. Help him in finding the desired column.

Input : First line of Input contains testcase "T". For each testcase "T", there will be 3 lines of input, first line contains lengths of the columns, and next two lines contains the scores of students sitting in that column.

Output : For each testcase, Output the column in which Sahil should sit.

Constraints :
1 <= T <= 100
1 <= N1, N2 <= 10000
1 <= score <= 1000000

Example :
Input :
2
5 6
8 4 5 6 7
2 3 4 5 6 7
3 5
100 29 37
100 200 300 400 500
Output :
C1
C2

Explanation :
TestCase 1 : In 1st column sum of score of students is 30 which is more than 2nd column (score = 27).

TestCase 2 : In 2nd column sum of score of students is 1500 which is more than 1st column (score = 166).





#include<iostream>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;

	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;

	    int column1[n1],column2[n2],score1=0,score2=0;

	    for(int i=0; i<n1; i++){
	        cin>>column1[i];
	    }

	    for(int i=0; i<n2; i++){
	        cin>>column2[i];
	    }

	    for(int i=0; i<n1; i++){
	        score1 += column1[i];
	    }

	    for(int i=0; i<n2; i++){
	        score2 += column2[i];
	    }

	    if(score1>score2){
	        cout<<"C1";
	    }
	    else{
	        cout<<"C2";
	    }

	    cout<<"\n";
	}

	return 0;
}
