/*
    Will explain if 10+ person asked
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef long long int lli;

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

void solve(){
    ll n;
    cin>>n;
    int r=sqrt(n*2);
    ll pre=(ll)(r-1)*(r)/2;
    if (pre+r<n){
        pre+=r;
        r+=1;
    }
    int pos=n-pre;
    
    int l=max(0,pos-1);
    ll sum=0;
    while(r>0){
       for(int i=l;i<min(pos,r);i++){
        sum+=(ll)(pre+i+1)*(pre+i+1);
       
       }
        r-=1;
        if (l>0){
            l-=1;
        }
        pre-=r;
    }
    cout<<sum<<endl;
    
}
int main(){
    faster();
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        solve();
    }
}