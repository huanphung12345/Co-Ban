/* 5. Kinh doanh Khỉ
Một vườn thú địa phương muốn theo dõi xem mỗi con trong ba con khỉ của họ ăn bao
nhiêu pound thức ăn mỗi ngày trong một tuần. Viết chương trình lưu trữ thông tin này
trong một mảng hai chiều cỡ 3 x 5, trong đó mỗi hàng đại diện cho một con khỉ và mỗi
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 2
cột đại diện cho một ngày trong tuần. Trước tiên, chương trình cần để người dùng nhập
dữ liệu cho mỗi con khỉ. Sau đó, nó sẽ hiển thị báo cáo gồm các thông tin sau:
− Lượng thức ăn trung bình mỗi ngày của cả gia đình khỉ.
− Lượng ăn ít nhất xét trên cả tuần và mọi con khỉ
− Lượng ăn nhiều nhất xét trên cả tuần và mọi con khỉ
− Xác thực đầu vào: Không chấp nhận số âm cho số pound thực phẩm đã ăn */
#include <iostream>
#include <iomanip>
using namespace std;
const int SO_KHI = 3;
const int SO_NGAY = 7;
int main() {
    double luongAn[SO_KHI][SO_NGAY];
    // Nhap du lieu
    for (int i = 0; i < SO_KHI; i++) {
        cout << "Nhap luong an cho con khi thu " << (i + 1) << ":\n";
        for (int j = 0; j < SO_NGAY; j++) {
            double luong;
            do {
                cout << "  Ngay " << (j + 1) << ": ";
                cin >> luong;
                if (luong < 0) {
                    cout << "  Vui long nhap so khong am.\n";
                }
            } while (luong < 0);
            luongAn[i][j] = luong;
        }
    }

    // Tinh toan va hien thi bao cao
    double tongLuong = 0;
    double luongItNhat = luongAn[0][0];
    double luongNhieuNhat = luongAn[0][0];

    for (int i = 0; i < SO_KHI; i++) {
        for (int j = 0; j < SO_NGAY; j++) {
            tongLuong += luongAn[i][j];
            if (luongAn[i][j] < luongItNhat) {
                luongItNhat = luongAn[i][j];
            }
            if (luongAn[i][j] > luongNhieuNhat) {
                luongNhieuNhat = luongAn[i][j];
            }
        }
    }

    double luongTrungBinh = tongLuong / (SO_KHI * SO_NGAY);

    cout << fixed << setprecision(2);
    cout << "\nBao cao ve luong an cua cac con khi:\n";
    cout << " - Luong an trung binh moi ngay cua ca gia dinh khi: " << luongTrungBinh << " pound\n";
    cout << " - Luong an it nhat trong tuan: " << luongItNhat << " pound\n";
    cout << " - Luong an nhieu nhat trong tuan: " << luongNhieuNhat << " pound\n";

    return 0;
}