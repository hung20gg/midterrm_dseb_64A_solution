/*
    Phương pháp
    - Cách 1: Đảo ngược số rồi so sánh số cũ với số mới (Thầy Tuyến đã dạy trên lớp)
    - Cách 2: So sánh chứ số đầu với chữ số cuối với nhau rồi tiến lại dần đến số ở giữa
*/

#include<iostream>
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