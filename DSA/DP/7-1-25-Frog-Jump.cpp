#include<bits/stdc++.h>
using namespace std;

//Problem Link -> https://www.geeksforgeeks.org/problems/geek-jump/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geek-jump

//Memoization
int solve(int i,vector<int> &height,vector<int> &dp){
    if(i == 0){
        return 0;
    }
    if(dp[i] != -1) return dp[i];
    
    int a = abs(height[i] - height[i-1]) + solve(i-1,height,dp);
    int b = INT_MAX;
    if(i >1) b = abs(height[i] - height[i-2]) + solve(i-2,height,dp);
    
    dp[i] = min(a,b);
    
    return dp[i];
    
}
int minimumEnergy(vector<int>& height, int n) {
    // Code here
    vector<int>dp(n+1,-1);
    return solve(n-1,height,dp);
}


//Tabulation
int minimumEnergyTabulation(vector<int>& height, int n) {
    // Code here
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    for(int i = 1 ; i < n ; i++){
        int firstStep = abs(height[i] - height[i-1]) + dp[i-1];
        int secondStep = INT_MAX;
        if(i > 1){
            secondStep = abs(height[i] - height[i-2]) + dp[i-2];
        }
        
        dp[i] = min(secondStep,firstStep);
    }
    return dp[n-1];
}


