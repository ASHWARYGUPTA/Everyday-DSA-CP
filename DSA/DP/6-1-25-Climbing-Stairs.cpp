#include<bits/stdc++.h>
using namespace std;

//PROBLEM LINK -> https://leetcode.com/problems/climbing-stairs/
//EXACTLY SAME AS FIBONACCI

int climbStairsRecurssion(int n,int cnt = 0) {
        if(n<0){
            return 0;
        }
        else if(n == 0){
            return 1;
        }

        cnt += climbStairsRecurssion(n-1);
        cnt += climbStairsRecurssion(n-2);

        return cnt;
}



int climbStairsSolveDP(int n,vector<int> &dp , int cnt = 0){
    if(n<0){
        return 0;
    }
    else if(n == 0){
        return 1;
    }

    if(dp[n] != -1) return dp[n];


    cnt += climbStairsSolveDP(n-1,dp);
    cnt += climbStairsSolveDP(n-2,dp);

    dp[n] = cnt;
    return dp[n];
} 


int climbStairsDP(int n,int cnt = 0) {

    vector<int>dp(n+1,-1);

    return climbStairsSolveDP(n,dp);
    
}

int climbStairsDPTabulation(int n,int cnt = 0){
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];

}

int climbStairsDPTabulationOptimal(int n,int cnt = 0){
    int prev1 = 1;
    int prev2 = 0;

    for(int i = 2 ; i <= n ; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;

}

