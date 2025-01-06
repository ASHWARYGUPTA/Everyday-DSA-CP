#include<bits/stdc++.h>
using namespace std;

//fib(n) = fib(n-1) + fib(n-2)

int fibRecurrsion(int n){

    if(n<0){
        return 0;
    }

    if(n == 1){
        return 1;
    }
    else if(n== 0){
        return 0;
    }

    return fibRecurrsion(n-1) + fibRecurrsion(n-2);
}

vector<int>dpMemo(INT_MAX,-1);
vector<int>dpTabulation(INT_MAX,-1);

;int fibDPMemoization(int n){
    
    if(dpMemo[n] != -1){
        return dpMemo[n];
    }

    if(n <= 1){
        dpMemo[n] = n;
    }
    else{
        dpMemo[n] = fibDPMemoization(n-1) + fibDPMemoization(n-2);
        return dpMemo[n];
    }
}

int fibDPTabulation(int n){
    dpTabulation[0] = 0;
    dpTabulation[1] = 1;

    for(int i = 2 ; i <= n ; i++){
        dpTabulation[i] = dpTabulation[i-1] + dpTabulation[i-2];
    }

    return dpTabulation[n];
}

int fibDPOptimal(int n){
    int prev1 = 1;
    int prev2 = 0;

    for(int i = 2 ; i <= n ; i++){
        int curr = prev1 +prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}