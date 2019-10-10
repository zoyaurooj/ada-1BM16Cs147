// Lab 7b, Knapsack Problem
#include <iostream>
#include <cmath>
using namespace std;

void DPKnapsack(int *wt, int *val,int n, int W){
	
	
	int i,j;
	int dp[n+1][W+1]; 
	for(i=0; i<=n; i++) dp[i][0] = 0;
	for(j=1 ; j<=W; j++) dp[0][j] = 0;
	
	for(i = 1; i<=n ; i++){
		for(j = 1; j<=W; j++){
			if(j-wt[i] >= 0)
				dp[i][j] = max(dp[i-1][j], val[i]+dp[i-1][j-wt[i]]);
			else
				dp[i][j] = dp[i-1][j];
                                
		}
	}

          for(i = 0; i<=n ; i++)
             {
		for(j = 0; j<=W; j++)
                {
                  cout<<dp[i][j]<<" ";
                }
cout<<"\n";
}

	cout<<"\nMaximum value : "<<dp[n][W]<<endl;
	

}

int main(){
	int *wt, *val, n, W;
	cout<<"Enter Knapsack capacity : ";
	cin>>W;
	cout<<"Enter number of items : ";
	cin>>n;
	wt = new int[n+1];
	val = new int[n+1];
	cout<<"Enter weight and value :\n";
	for(int i =1; i<=n; i++){
		cin>>wt[i];
		cin>>val[i];
	}
	DPKnapsack(wt, val, n, W);
}//end of main

