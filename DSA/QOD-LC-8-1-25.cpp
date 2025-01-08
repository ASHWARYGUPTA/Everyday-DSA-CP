#include<bits/stdc++.h>
using namespace std;

//Problem Link => https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/?envType=daily-question&envId=2025-01-08

int countPrefixSuffixPairs(vector<string>& words) {
    int cnt = 0;
    int n = words.size();
    for(int i = 0 ; i < n ; i++){
        string s = words[i];
        int m = s.length();
        for(int j = i ; j < n ; j++){
            bool isCorrect = false;
            int p = words[j].length();
            if(words[j].length() < m) continue;
            if(i == j) continue;
            else{
                cout<<s<<" "<<words[j]<<"\n";
                for(int k = 0 ; k < m ; k++){
                    cout<<"words[j][k] "<<words[j][k]<<" words[j][p-m+k]  "<<words[j][p-m+k]<<" s[k]"<<s[k]<<"\n";
                    if(words[j][k] == s[k] && words[j][p-m+k] == s[k]){
                        if(k == m-1){
                            isCorrect = true;
                        }
                        continue;
                    }
                    else{
                        break;
                    }
                }
            }
            if(isCorrect) cnt++;
        }
    }
    return cnt;
}



int main(){

}