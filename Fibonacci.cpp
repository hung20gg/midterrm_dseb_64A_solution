/*
    Sử dụng fibonacci phương pháp trượt mảng
    (2 số liên tục thay đổi vị trí theo 1 hướng)
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef long long int lli;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

void solve(){
    
    //Phần tử đầu tiên t trong dãy fibonacci
    ll l=1,r=1;

    //t để làm biến phụ đảo vị trí l, r
    ll n,t=1;
    cin>>n;

    //Edge case n=1 hoặc 2
    if(n<=2){
        cout<<1<<endl;
        return;
    }
    //Tính phần tử cuối cùng trong dãy fibonacci
    //Do đã có phần tử 1 và 2 rồi nên bắt đầu từ số thứ 3
    while (n-2>0)
    {
        //Đảo vị trí 2 biến
        t=l+r;
        l=r;
        r=t;
        n=n-1;
    }
    cout<<t<<endl;
}

//Hàm main
int main(){
    faster();
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        solve();
    }
}