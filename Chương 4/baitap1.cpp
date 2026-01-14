/* 1. Tổng các số (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập một giá trị nguyên dương. Chương trình
nên sử dụng một vòng lặp để lấy tổng của tất cả các số nguyên từ 1 đến số được nhập.
Ví dụ, nếu người dùng nhập 50, vòng lặp sẽ tìm tổng của 1, 2, 3, 4 ,. . ., 50. Biến đầu
vào: Không chấp nhận số âm. */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    // Kiểm tra nếu số nhập vào là số âm
    if (n < 1) {
        cout << "Vui long nhap mot so nguyen duong!" << endl;
        return 1; // Kết thúc chương trình với mã lỗi
    }

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i; // Cộng dồn các số từ 1 đến n
    }

    cout << "Tong cac so tu 1 den " << n << " la: " << sum << endl;
    return 0; // Kết thúc chương trình thành công
}