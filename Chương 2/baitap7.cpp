/* 7. Rạp chiếu phim
Một rạp chiếu phim được giữ lại 20% tổng doanh thu thu được từ việc bán vé. Phần 
còn lại chuyển cho nhà phân phối phim. Viết chương trình tính số tiền cho phòng vé 
và nhà phân phối. Chương trình cần yêu cầu nhập tên phim, số vé cho người lớn và 
số vé cho trẻ em đã được bán. 
Biết: 
- Giá vé cho người lớn là 10 đô la; 
- Giá vé cho trẻ em là 6 đô la. */
#include <iostream>
#include <string>
using namespace std;
int main() {
    const double GIA_VE_NGUOI_LON = 10.0;
    const double GIA_VE_TRE_EM = 6.0;
    const double PHAN_TRAM_RAP = 0.20;

    string tenPhim;
    int soVeNguoiLon, soVeTreEm;

    // Nhập thông tin từ người dùng
    cout << "Nhap ten phim: ";
    getline(cin, tenPhim);
    cout << "Nhap so ve nguoi lon da ban: ";
    cin >> soVeNguoiLon;
    cout << "Nhap so ve tre em da ban: ";
    cin >> soVeTreEm;

    // Tính tổng doanh thu
    double tongDoanhThu = (soVeNguoiLon * GIA_VE_NGUOI_LON) + (soVeTreEm * GIA_VE_TRE_EM);

    // Tính số tiền cho rạp và nhà phân phối
    double tienRap = tongDoanhThu * PHAN_TRAM_RAP;
    double tienNhaPhanPhoi = tongDoanhThu - tienRap;

    // Hiển thị kết quả
    cout << "Tong doanh thu cho phim \"" << tenPhim << "\": $" << tongDoanhThu << endl;
    cout << "So tien cho rap: $" << tienRap << endl;
    cout << "So tien cho nha phan phoi: $" << tienNhaPhanPhoi << endl;

    return 0;
}