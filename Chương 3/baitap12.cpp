/* 13. Câu lạc bộ sách
Một hiệu sách tính điểm thưởng cho người mua tùy theo số sách khách hàng đã mua
như sau:
− 0 cuốn sách → 0 điểm
− 1 cuốn sách → 5 điểm
− 2 cuốn sách → 15 điểm
− 3 cuốn sách → 30 điểm
− từ 4 cuốn sách trở lên → 60 điểm
Viết chương trình nhập vào số sách của 1 khách hàng và in ra số điểm thưởng của họ
là bao nhiêu. */
#include <iostream>
using namespace std;
int main() {
    int soSach;
    cout << "Nhap so sach da mua: ";
    cin >> soSach;

    int diemThuong;
    if (soSach == 0) {
        diemThuong = 0;
    } else if (soSach == 1) {
        diemThuong = 5;
    } else if (soSach == 2) {
        diemThuong = 15;
    } else if (soSach == 3) {
        diemThuong = 30;
    } else {
        diemThuong = 60;
    }

    cout << "So diem thuong: " << diemThuong << endl;
    return 0;
}