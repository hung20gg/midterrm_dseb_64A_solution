/*
    Tạo bảng cửu chương
    Dùng 1 vòng for in ra 10 dòng tích của a từ 1 đến 10
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef long long int lli;


#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


void solve(){
    int a;
    cin>>a;
    for(int i=1;i<=10;i++){
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    }
}

int main(){
    faster();
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        solve();
    }
}