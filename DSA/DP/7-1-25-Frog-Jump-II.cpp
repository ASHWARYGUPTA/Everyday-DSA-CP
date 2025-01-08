#include<bits/stdc++.h>
using namespace std;

//problem link -> https://www.geeksforgeeks.org/problems/minimal-cost/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimal-cost

//unoptimal
int solve(vector<int>& arr,int n,int k,vector<int>dp,int i){
    if(i == 0) return 0;
    else if(dp[i] != -1) return dp[i];
    int ans = INT_MAX;
    for(int j = 1 ; j <= k ; j++){
        if(i >= j){
            int a = abs(arr[i] - arr[i-j])+solve(arr,n,k,dp,i-j);
            ans = min(a,ans);
        }
    }
    dp[i] = ans;
    return dp[i];
}

int minimizeCost(int k, vector<int>& arr) {
    // Code here
    int n = arr.size();
    vector<int>dp(n+1,-1);
    return solve(arr,n,k,dp,n-1);
}


