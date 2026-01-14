/* 14. Xếp hàng học sinh
Một giáo viên đã yêu cầu tất cả học sinh của mình xếp hàng theo tên của họ. Ví dụ,
trong một lớp học, Amy sẽ đứng đầu hàng, và Yolanda sẽ đứng cuối. Viết chương trình
nhắc người dùng nhập số lượng học sinh trong lớp, sau đó lặp lại để đọc (nhập) tên tên
từng học sinh. Khi tất cả các tên đã được đọc, nó sẽ báo cáo học sinh nào sẽ ở đầu hàng
và học sinh nào sẽ ở cuối hàng. Giả sử rằng không có hai học sinh nào trùng tên.
Xác thực đầu vào: Không chấp nhận số lượng học sinh nhỏ hơn 1 hoặc lớn hơn 25 */
#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main() {
    const int MAX_HOCSINH = 25;
    int soHocSinh;

    // Nhập số lượng học sinh với xác thực đầu vào
    do {
        cout << "Nhap so luong hoc sinh (1-25): ";
        cin >> soHocSinh;

        if (soHocSinh < 1 || soHocSinh > MAX_HOCSINH) {
            cout << "So luong hoc sinh khong hop le. Vui long nhap lai." << endl;
        }
    } while (soHocSinh < 1 || soHocSinh > MAX_HOCSINH);

    // Xóa bộ đệm nhập
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string tenHocSinh, tenDauHang, tenCuoiHang;

    for (int i = 0; i < soHocSinh; ++i) {
        cout << "Nhap ten hoc sinh thu " << (i + 1) << ": ";
        getline(cin, tenHocSinh);

        // Cập nhật tên học sinh đứng đầu và cuối hàng
        if (i == 0) {
            tenDauHang = tenHocSinh;
            tenCuoiHang = tenHocSinh;
        } else {
            if (tenHocSinh < tenDauHang) {
                tenDauHang = tenHocSinh;
            }
            if (tenHocSinh > tenCuoiHang) {
                tenCuoiHang = tenHocSinh;
            }
        }
    }

    // Hiển thị kết quả
    cout << "Hoc sinh o dau hang: " << tenDauHang << endl;
    cout << "Hoc sinh o cuoi hang: " << tenCuoiHang << endl;

    return 0;
}