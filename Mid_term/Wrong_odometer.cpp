/*
    Công tơ mét
    Chuyển hệ số 9 (0->9 không tồn tại số 4) về hệ số 10
*/

#include<iostream>
#include<string>
using namespace std;
 
int main (){
    while (1){
        string str;
        cin>>str;
        if (str=="0") return 0;
        long long s=0;
        for (int i=0;i<str.length();i++){
            int so=str[i]-'0';

            //Nếu số đó lớn hơn 4 thì trừ đi 1 đơn vị để có thể đưa về hệ cơ số 9 (0->8)
            if (so>4) so--;
            s=s*9+so;
        }
        cout<<s<<endl;
    }
    return 0;
} 
 