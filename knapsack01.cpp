//Write a program to solve a 0-1 Knapsack problem using dynamic programming or branch and 
//bound strategy.

#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int w,vector<int>val,vector<int>wt,vector<vector<int>>&dp){

  for(int i=0;i<n+1;i++){
    for(int j=0;j<w+1;j++){
      if(i==0|| j==0){
        dp[i][j]=0; 
      }
    }
  }
  for(int i=1;i<n+1;i++){
    for(int j=1;j<w+1;j++){
      if(wt[i-1]<=j){
        dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
      }
      else{
        dp[i][j]=dp[i-1][j];
      }
    }
  }
  return dp[n][w];
  
}

int main(){
    int n,w;
    cout<<"Enter no. of items: ";
    cin>>n;
    cout<<"Enter weight of Knapsack: ";
    cin>>w;
     vector<int>val(n);
     vector<int>weight(n);
     cout<<"Enter weight of n items: "<<endl;

  for(int i=0;i<n;i++){
    cin>>weight[i];
  }
   cout<<"Enter value of n items: "<<endl;
   for(int i=0;i<n;i++){
    cin>>val[i];
   }
vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
   cout<<knapsack(n,w,val,weight,dp);

    return 0;
}
