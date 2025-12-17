/* 15. Thuế bất động sản
Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm 
giá trị thực của tài sản. Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị
đánh giá của nó là 6.000 đô la. Thuế tài sản sau đó là 75 ¢ cho mỗi $ 100 của giá trị
đánh giá. Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. Viết chương trình 
yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và 
thuế tài sản.
(1 đô la = 100 cent) */
#include <iostream>
using namespace std;
int main() {
    double giaTriThuc, giaTriDanhGia, thueBatDongSan;
    const double tiLeDanhGia = 0.6; // 60%
    const double thueTren100DoLa = 0.75; // 75 cent trên 100 đô la

    // Nhập giá trị thực của tài sản
    cout << "Nhap gia tri thuc cua tai san (do la): ";
    cin >> giaTriThuc;

    // Tính giá trị đánh giá
    giaTriDanhGia = giaTriThuc * tiLeDanhGia;

    // Tính thuế bất động sản
    thueBatDongSan = (giaTriDanhGia / 100) * thueTren100DoLa;

    // Hiển thị kết quả
    cout << "Gia tri danh gia cua tai san: $" << giaTriDanhGia << endl;
    cout << "Thue bat dong san: $" << thueBatDongSan << endl;

    return 0;
}