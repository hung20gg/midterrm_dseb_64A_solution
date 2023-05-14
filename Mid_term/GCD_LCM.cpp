/*
    Tìm ước chung lớn nhất, bội chung nhỏ nhất
    Có nhiều cách khác nhau để tìm, bài giải này sử dụng thuật toán UCLN Euclidean
    Tham khảo https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/
    Prove: https://en.wikipedia.org/wiki/Euclidean_algorithm 
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef long long int lli;

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);



ll gcd(ll a, ll b){
    if (a==0)
        return b;
    return gcd(b%a,a);
}

lli lcm(lli v, lli b)
{
    return (v * b) / gcd(v, b);
}
void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
}

int main(){
    faster();
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        solve();
    }
}