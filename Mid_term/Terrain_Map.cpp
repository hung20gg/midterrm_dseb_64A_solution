/*
    Bản đồ địa hình
    Chia bản đồ làm 2 nửa, nửa giảm dần (5-4-3-2-1) và nửa tăng dần (2-3-4-5)
    Với mỗi 1 dòng, chúng ta sẽ chia làm 3 phần
    - Phần 1 (giảm từ ngoài vào trong)
    - Phần 2 (giá trị giữ nguyên)
    - Phần 3 (giá trị tăng dần ra ngoài)
    VD: 54|33333|45
    Tùy chỉnh các điều kiện vòng for phù hợp để tạo ra 1 hình hoàn chỉnh
*/

//Thư viện
#include<bits/stdc++.h>
using namespace std;

//Rút gọn 
typedef unsigned long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef long long int lli;

#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

void solve(){
    //Nhập a
    int a;
    cin>>a;
    
    //Nửa trên 
    for(int i=0;i<a;i++){

        //Phần 1
        for(int j=0;j<i;j++){
            cout<<a-j;
        }

        //Phần 2
        for(int j=i;j<a*2-1-i;j++){
            cout<<a-i;
        }

        //Phần 3
        for(int j=a*2-1-i;j<a*2-1;j++){
            cout<<j-a+2;
        }
        cout<<endl; 
    }

    //Nửa dưới
    for(int i=a-2;i>=0;i--){

        //Phần 1
        for(int j=0;j<i;j++){
            cout<<a-j;
        }

        //Phần 2
        for(int j=i;j<a*2-1-i;j++){
            cout<<a-i;
        }

        //Phần 3
        for(int j=a*2-1-i;j<a*2-1;j++){
            cout<<j-a+2;
        }
        cout<<endl; 
    }
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