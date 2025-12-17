/* 18. Lãi suất kiếm được
Giả sử không có khoản tiền gửi nào ngoài khoản đầu tư ban đầu, số dư trong tài 
khoản tiết kiệm sau một năm có thể được tính theo công thức
Trong đó, Principal là số dư trong tài khoản tiết kiệm, Rate là lãi suất, và T là số lần 
tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý).
Viết một chương trình yêu cầu tiền gốc, lãi suất và số lần lãi gộp. Nó sẽ hiển thị một 
báo cáo tương tự như: */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double principal, rate;
    int times;

    // Nhập dữ liệu từ người dùng
    cout << "Nhap so tien goc (Principal): ";
    cin >> principal;
    cout << "Nhap lai suat (Rate) theo phan tram: ";
    cin >> rate;
    cout << "Nhap so lan tinh lai gop trong mot nam (T): ";
    cin >> times;

    // Chuyen doi lai suat tu phan tram sang thap phan
    rate /= 100.0;

    // Tinh so du trong tai khoan sau mot nam
    double amount = principal * pow((1 + rate / times), times);

    // Hien thi bao cao
    cout << fixed << setprecision(2);
    cout << "\nBao cao tai khoan tiet kiem:\n";
    cout << "So tien goc (Principal): $" << principal << endl;
    cout << "Lai suat (Rate): " << rate * 100 << "%" << endl;
    cout << "So lan tinh lai gop trong mot nam (T): " << times << endl;
    cout << "So du trong tai khoan sau mot nam: $" << amount << endl;

    return 0;
}