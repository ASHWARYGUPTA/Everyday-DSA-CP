#include <bits/stdc++.h>
using namespace std;



//Problem Link => https://leetcode.com/problems/house-robber/description/

//Memoization
int solveMemoization(vector<int>& nums,int n,int i,int &moneyStolen,vector<int>&dp){
        

    if(i >= n) return moneyStolen;

    if(dp[i] != -1) return moneyStolen + dp[i];

    int k = moneyStolen + nums[i];
    int a = solveMemoization(nums,n,i+2,k,dp);
    int b = solveMemoization(nums,n,i+1,moneyStolen,dp);

    dp[i] = max(a,b) - moneyStolen;
    
    return max(a,b);
}
int rob(vector<int>& nums) {
    
    int n = nums.size();
    int i = 0;
    int moneyStolen = 0;
    vector<int>dp(n+1,-1);

    return solveMemoization                                                                                    (nums,n,i,moneyStolen,dp);
}



int main(){

}