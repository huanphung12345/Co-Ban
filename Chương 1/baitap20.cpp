/* 17. Hoa hồng chứng khoán
Kathryn đã mua 750 cổ phiếu với giá 35.00 USD / cổ phiếu. Cô ấy phải trả cho người 
môi giới chứng khoán của mình khoản hoa hồng 2% cho giao dịch. Viết một chương 
trình tính toán và hiển thị như sau:
− Số tiền thanh toán cho cổ phiếu (không có hoa hồng).
− Số tiền hoa hồng.
− Tổng số tiền đã thanh toán (tổng cho cổ phiếu cộng với tiền hoa hồng). */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int soCoPhieu = 750;
    const double giaCoPhieu = 35.00;
    const double hoaHongTyLe = 0.02;

    double tienChoCoPhieu = soCoPhieu * giaCoPhieu;
    double tienHoaHong = tienChoCoPhieu * hoaHongTyLe;
    double tongTienThanhToan = tienChoCoPhieu + tienHoaHong;

    cout << fixed << setprecision(2);
    cout << "So tien thanh toan cho co phieu (khong co hoa hong): $" << tienChoCoPhieu << endl;
    cout << "So tien hoa hong: $" << tienHoaHong << endl;
    cout << "Tong so tien da thanh toan: $" << tongTienThanhToan << endl;

    return 0;
}