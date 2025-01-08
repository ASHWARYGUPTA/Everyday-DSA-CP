#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long double lld;
#define ll long long
#define pb push_back
#define ppb pop_back
#define vii vector<int>
#define vll vector<long long>
#define nline "\n"
#define PI 3.141592653589793238462
#define sz(x) (int (x).size())
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define vpii vector<pair<int,int>>
#define pi pair<int,int>
#define ff first
#define ss second

#ifndef ONLINE_JUDGE
    #define debug(x){cerr<<#x;_print(x);cerr<<nline;}
#else
    #define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vii nums(n);
        for(auto &i:nums) cin>>i;

        int minDiff =INT_MAX;
        bool printed = false;
        for(int i = 0 ; i< n-1 ; i++){
            if(nums[i+1] - nums[i] < 0){
                cout<<0<<"\n";
                printed = true;
                break;
            }
            minDiff = min(nums[i+1] - nums[i] , minDiff);
        }
        if(!printed){
            if(minDiff == 0){
                cout<<1<<"\n";
            }
            else{
                cout<<minDiff/2 + 1<<"\n";
            }
        }
        
    }
    return 0;
}