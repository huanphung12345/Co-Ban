/* 16. Thuế tài sản công dân cao tuổi
Quận Madison cung cấp một khoản miễn thuế chủ nhà $ 5,000 cho những người cao 
tuổi của nó. Ví dụ: nếu ngôi nhà của một người cao tuổi được định giá là 158.000 
đô la, giá trị được đánh giá của nó sẽ là 94.800 đô la, như đã giải thích ở trên. Tuy 
nhiên, anh ta sẽ chỉ trả thuế trên 89.800 đô la. Với mức thuế năm ngoái là 2,64 đô la 
cho mỗi 100 đô la giá trị được đánh giá, thuế tài sản sẽ là 2.370,72 đô la. Ngoài việc 
giảm thuế, công dân cao tuổi được phép trả thuế tài sản của họ thành bốn lần như 
nhau. Khoản thanh toán hàng quý đến hạn cho tài sản này sẽ là $ 592,68. Viết một 
chương trình yêu cầu người dùng nhập giá trị thực của một phần tài sản và thuế suất 
hiện hành cho mỗi $ 100 giá trị được đánh giá. Sau đó, chương trình sẽ tính toán và 
báo cáo mức thuế bất động sản hàng năm mà một chủ nhà cao cấp sẽ phải trả cho 
bất động sản này và hóa đơn thuế hàng quý sẽ là bao nhiêu. */
#include <iostream>
using namespace std;
int main() {
    double giaTriThuc, giaTriDanhGia, thueBatDongSanHangNam, hoaDonThueHangQuy;
    const double tiLeDanhGia = 0.6; // 60%
    const double khoanMienThue = 5000.0; // $5,000 miễn thuế

    double thueTren100DoLa; // Thuế suất hiện hành cho mỗi $100 giá trị được đánh giá

    // Nhập giá trị thực của tài sản
    cout << "Nhap gia tri thuc cua tai san (do la): ";
    cin >> giaTriThuc;

    // Nhập thuế suất hiện hành
    cout << "Nhap thue suat hien hanh cho moi $100 gia tri danh gia (do la): ";
    cin >> thueTren100DoLa;

    // Tính giá trị đánh giá
    giaTriDanhGia = giaTriThuc * tiLeDanhGia;

    // Tính thuế bất động sản hàng năm sau khi áp dụng khoản miễn thuế
    thueBatDongSanHangNam = ((giaTriDanhGia - khoanMienThue) / 100) * thueTren100DoLa;

    // Tính hóa đơn thuế hàng quý
    hoaDonThueHangQuy = thueBatDongSanHangNam / 4;

    // Hiển thị kết quả
    cout << "Thue bat dong san hang nam: $" << thueBatDongSanHangNam << endl;
    cout << "Hoa don thue hang quy: $" << hoaDonThueHangQuy << endl;

    return 0;
}