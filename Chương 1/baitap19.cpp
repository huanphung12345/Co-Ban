/* 14. Thông tin cá nhân
Viết một chương trình hiển thị các thông tin sau, mỗi thông tin trên một dòng.
− Tên của bạn
− Địa chỉ của bạn, với quận, thành phố, và ZIP code
− Số điện thoại của bạn
− Chuyên ngành của bạn
Sử dụng duy nhất một câu lệnh cout để hiển thị tất cả những thông tin trên */
#include <iostream>
using namespace std;
int main() {
    cout << "Ten: Nguyen Van A\n"
         << "Dia chi: 123 Duong ABC, Quan 1, TP.HCM, 700000\n"
         << "So dien thoai: 0123456789\n"
         << "Chuyen nganh: Cong nghe thong tin" << endl;

    return 0;
}