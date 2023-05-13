/*
Bài toán yêu cầu xác định kiểu tam giác khi nhập vào độ dài ba cạnh a,b,c
Bài này có nhiều cách làm, tùy theo mọi người có thể xử lý theo cách khác nhau

Tùy theo bài Easy hay Hard mà sẽ có yêu cầu về input khác nhau.
    - Easy: int
    - Hard: string

Phương pháp "nqh"
Overall: Gán 1 biến đếm là condition=0
Nếu không tồn tại tam giác thì cout<<-1<<endl; và return thoát chương trình luôn
Xét các trường hợp:
    - Vuông 
    - 2 Cạnh bằng nhau (a=b) (b=c) (c=a)
Nếu thỏa mãn có tính chất vuông thì condition cộng thêm 1
Nếu thỏa mãn các trường hợp 2 cạnh bằng nhau thì cộng thêm 2
Công thức :
    cond=Vuông(a,b,c) + Bằng_nhau(a,b) + Bằng_nhau(b,c) + Bằng_nhau(c,a)
Nếu cond>=4 (cond=6) thì là tam giác đều
Nếu cond=3 thì là vuông cân (vừa vuông vừa có 2 cạnh = nhau)
Nếu cond=2 thì là tam giác cân
Nếu cond=1 thì là tam giác vuông
Nếu cond=0 thì là tam giác thường
*/

//Thư viện
#include<bits/stdc++.h>
using namespace std;

//Rút ngắn câu lệnh
typedef long long ll;
typedef long double ld;

//Kiểm tra có phải là tam giác hay không
bool istriangle(ld a,ld b,ld c){
    if(a+b>c && a+c>b && b+c>a){
        return true;
    }
    return false;
}

//Kiểm tra xem 2 cạnh có bằng nhau không
int isisosceles(ld a, ld b){
    if(a==b){
        // cout<<'c'<<endl;
        return 2;
    }
    return 0;
}

//Kiểm tra xem có góc vuông không
int isright(ld a,ld b,ld c){
    // cout<<a*a<<" "<<b*b<<" "<<c*c<<endl;
    if(round(a*a)+round(b*b)==round(c*c) || round(a*a)+round(c*c)==round(b*b) || round(b*b)+round(c*c)==round(a*a)){
        // cout<<'v'<<endl;
        return 1;
    }
    return 0;
}

//Chuyển đổi input (đối với bài hard)
ld checkintput(string s){
    
    // Kiểm tra có dấu căn không
    if (s[0]=='/'){
        s[0]='0';
        return(sqrt(atoi(s.c_str())));
    }
    return atoi(s.c_str());
}

//Hàm giải quyết vấn đề
void solve(){

    //Nhập xuất (thay bằng int hoặc long long với bài Easy)
    string a1,b1,c1;
    cin>>a1>>b1>>c1;
    ld a,b,c;
    a=checkintput(a1);
    b=checkintput(b1);
    c=checkintput(c1);
    
    //Kiểm tra điều kiện tam giác
    if (!istriangle(a,b,c)){
        cout<<-1<<endl;
        return;
    }

    //Bắt đầu xét các tính chất tam giác
    int cond=0;
    cond+=isright(a,b,c)+isisosceles(a,b)+isisosceles(b,c)+isisosceles(a,c);

    //Kiểm tra kết quả
    if (cond>=4){
        cout<<4<<endl;
    }else{
        cout<<cond<<endl;
    }
}

int main(){
    //Nhập số test
    int t;
    cin>>t;

    //Thực hiện t lần số test
    while(t--){
        solve();
    }
}