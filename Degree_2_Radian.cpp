/*
Phân tích số thành tích các số nguyên tố

Bài này sẽ phải sử dụng phương pháp phân tách các số thành thừa số nguyên tố
(recommend xem diutube)
*/

/*
Khái quát cách phân tách số n thành các thừa số nguyên tố.
1. Tạo một vòng lặp các số i từ 2-> căn n;
2. Nếu số đó chia hết hết cho i thì thực hiện lệnh 3->5, không thì lệnh 6
3. Ta tạo 1 biến đếm số lần lặp là c=0
4. Khi n%i==0, ta tạo vòng while để chia dần số n cho i để n không thể chia hết cho i 
    được nữa, đồng thời cập nhật biến đếm ở mỗi vòng lặp.
5. Khi nào n%i != 0, ta in số i , c và dấu của chúng (cách in dấu ở sau).
6. i được cập nhật 1 biến mới, bắt đầu lại vòng lặp 2
    (Khi đó i luôn được đảm bảo là số nguyên tổ)
    (Chứng minh: khi biến i=2 thì ta đã loại bỏ hoàn toàn các i khác chia hết cho 2(4,6,8,..))
7. Do ta xét i đến căn(n) nên sẽ có những số lớn hơn căn(n) không được xét 
    VD: căn(17) xấp xỉ 4 nên không xét số nào
    Nên sau khi chạy hết căn(n) thì ta cần trả lại giá trị a cuối cùng.

Đối với số cực lớn, thực tế số lần xảy ra vòng lặp của chúng chỉ đến số nguyên tố lớn nhì
VD: 126 = 2x 3^2 x7 thì chỉ xét vòng lặp 2 lần từ 2 -> 3
*/

/*
Khái quát cách in các biến số
Về cơ bản, ta sẽ in số theo dạng:" * i**c"
Nếu số i là số đầu tiên thì không in dấu sao (1), còn nếu c bằng 1 thì không in "**c" (2).
(1) Đặt 1 biến đếm tạm là s=0. Không in dấu " * " nếu s==0. Khi tìm và in được i ta cập nhật s=1
(2) Nếu c=1 thì không in, c>2 thì mới in.

*/

//Thư viện
#include<bits/stdc++.h>
using namespace std;

//Rút gọn câu lệnh
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
    //Nhập số a
    ll a;
    cin>>a;

    //Khai báo s và c
    ll c=0;
    int s=0;
    for(int i=2;i<=sqrt(a);i++){
        
        //Thỏa mãn điều kiện a%i==0
        if(a%i==0){

            //Điều kiện in dấu nhân
            if (s!=0){
                cout<<" * ";
            }

            //Chặt nhỏ số a làm cho a không thể chia hết cho i nữa
            while(a%i==0){
                a/=i;
                c++;
            }

            //In số nhân+ điều kiện in dấu mũ
            cout<<i;
            if(c>1){
                cout<<"**"<<c;
            }
            c=0;
            s++;
        } 
    }

    //Check số a còn lại sau khi chia
    if (a>1){
        if (s!=0){
            cout<<" * ";
        }
            cout<<a;
    }
    cout<<endl;
}

//Hàm main
int main(){
    //buff thời gian
    faster();
    int test;
    cin>>test;
    for (int i=0;i<test;i++){
        solve();
    }
}