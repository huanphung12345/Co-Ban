/* 19. Thanh toán hàng tháng
Khoản thanh toán hàng tháng cho một khoản vay có thể được tính theo công thức 
sau:
Trong đó, Rate là lãi suất hàng tháng, được tính bằng lãi suất hàng năm chia cho 12. 
(12% lãi suất hàng năm sẽ là 1% lãi suất hàng tháng.) N là số lần thanh toán và L là 
số tiền của khoản vay.
Hãy viết một chương trình yêu cầu nhập vào các giá trị này và hiển thị báo cáo dưới 
dạng tương tự như sau */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double loanAmount, annualRate;
    int numberOfPayments;

    // Nhập dữ liệu từ người dùng
    cout << "Nhap so tien cua khoan vay (L): ";
    cin >> loanAmount;
    cout << "Nhap lai suat hang nam (Rate) theo phan tram: ";
    cin >> annualRate;
    cout << "Nhap so lan thanh toan (N): ";
    cin >> numberOfPayments;

    // Chuyen doi lai suat hang nam sang lai suat hang thang
    double monthlyRate = (annualRate / 100.0) / 12.0;

    // Tinh toan khoan thanh toan hang thang
    double monthlyPayment = (monthlyRate * loanAmount) / (1 - pow(1 + monthlyRate, -numberOfPayments));

    // Hien thi bao cao
    cout << fixed << setprecision(2);
    cout << "\nBao cao khoan vay:\n";
    cout << "So tien cua khoan vay (L): $" << loanAmount << endl;
    cout << "Lai suat hang nam (Rate): " << annualRate << "%" << endl;
    cout << "So lan thanh toan (N): " << numberOfPayments << endl;
    cout << "Khoan thanh toan hang thang: $" << monthlyPayment << endl;

    return 0;
}