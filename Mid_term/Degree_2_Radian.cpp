/*
Lười quá!!!
 `Về cơ bản bài này sẽ cần mọi người tìm UCLN của góc và 180, sau đó lấy cả tử và mẫu chia cho UCLN đó.
 `Lưu ý là góc<2pi nên đối với số góc lớn ta cần lấy phần dư của nó với 360
 `Ví dụ góc 730 thì ta lấy 730%360 bằng 10.
 `Tùy theo các trường hợp đặc biệt mà có cách in khác nhau
*/

#include<bits/stdc++.h>
using namespace std;

typedef double ld;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    //Faster
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);

    //Nhập
	int T;
	cin>>T;
	while(T--){
		ll a;
		cin>>a;

        //Chia dư
		a%=360; 

        //Tìm UCLN (mọi người làm hàm tử tế nha 😾)
		ll UCLN = __gcd(a,(ll)180);
		ll tu = a/UCLN;
		ll mau = (ll)180/UCLN;

        //Các trường hợp in đặc biệt
		if ( tu == 1 &&  mau == 1){
			cout<<"$"<<endl;
		}
		if (tu != 1 && mau == 1){
			cout<<0<<"$"<<endl;
		}
		if (tu == 1 && mau != 1){
			cout<<"$"<<"/"<<mau<<endl;
		}

        //Không đặc biệt
		if (tu != 1 && mau != 1){
			cout<<tu<<"$"<<"/"<<mau<<endl;
		}
	}

return 0;
}