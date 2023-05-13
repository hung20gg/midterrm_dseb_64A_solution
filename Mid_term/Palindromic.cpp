#include <iostream>
#include<fstream>
using namespace std;
void solve () {
    string num;
    cin >> num;
    int n= num.length()-1;
    
   if (n<=0) {cout<<"YES"<<endl; return;}
    for (int i=0;i<((n+1)/2); i++)
    {   
        if (num[i]==num[n-i]) 
        continue;
        else {cout << "NO"<<endl;return;}
    }
    cout << "YES"<<endl;
    
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        solve();
    }
}