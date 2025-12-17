/* 14. Thuế bán hàng theo tháng
Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu 
trong tháng và số thuế bán hàng đã thu được. Viết một chương trình yêu cầu nhập 
tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế
bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của 
quận là 2 phần trăm.
Nếu biết tổng số tiền thu được và tổng số thuế bán hàng là 6 phần trăm, thì số tiền 
bán sản phẩm có thể được tính như sau:
Trong đó, S là doanh thu bán sản phẩm, và T là tổng thu nhập (doanh thu bán sản 
phẩm cộng với thuế bán hàng). */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    const double PHAN_TRAM_THUE_BAN_HANG = 0.06; // Tổng thuế bán hàng (4% + 2%)

    string thang, nam;
    double tongSoTienThuDuoc;

    // Nhập tháng, năm và tổng số tiền thu được
    cout << "Nhap thang: ";
    getline(cin, thang);
    cout << "Nhap nam: ";
    getline(cin, nam);
    cout << "Nhap tong so tien thu duoc tai may tinh tien: ";
    cin >> tongSoTienThuDuoc;

    // Tính doanh thu bán sản phẩm
    double doanhThuBanSanPham = tongSoTienThuDuoc / (1 + PHAN_TRAM_THUE_BAN_HANG);

    // Tính số thuế bán hàng đã thu được
    double soThueBanHang = tongSoTienThuDuoc - doanhThuBanSanPham;

    // Định dạng kết quả
    cout << fixed << setprecision(2) << showpoint;

    // Hiển thị kết quả
    cout << "Bao cao thue ban hang cho thang " << thang << " nam " << nam << ":\n";
    cout << "Doanh thu ban san pham: $" << doanhThuBanSanPham << endl;
    cout << "So thue ban hang da thu duoc: $" << soThueBanHang << endl;

    return 0;
}