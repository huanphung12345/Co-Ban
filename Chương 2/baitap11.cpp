/* 11. Chi phí ô tô (Bắt buộc)
Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí 
sau đây phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm, 
xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình sẽ hiển thị tổng chi phí hàng 
tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này. */
#include <iostream>
using namespace std;
int main() {
    double thanhToanKhoanVay, baoHiem, xang, dau, lop, baoDuong;

    // Nhập chi phí hàng tháng từ người dùng
    cout << "Nhap chi phi hang thang cho thanh toan khoan vay: ";
    cin >> thanhToanKhoanVay;
    cout << "Nhap chi phi hang thang cho bao hiem: ";
    cin >> baoHiem;
    cout << "Nhap chi phi hang thang cho xang: ";
    cin >> xang;
    cout << "Nhap chi phi hang thang cho dau: ";
    cin >> dau;
    cout << "Nhap chi phi hang thang cho lop: ";
    cin >> lop;
    cout << "Nhap chi phi hang thang cho bao duong: ";
    cin >> baoDuong;

    // Tính tổng chi phí hàng tháng
    double tongChiPhiHangThang = thanhToanKhoanVay + baoHiem + xang + dau + lop + baoDuong;

    // Tính tổng chi phí hàng năm
    double tongChiPhiHangNam = tongChiPhiHangThang * 12;

    // Hiển thị kết quả
    cout << "Tong chi phi hang thang: $" << tongChiPhiHangThang << endl;
    cout << "Tong chi phi hang nam: $" << tongChiPhiHangNam << endl;

    return 0;
}