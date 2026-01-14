/* 14. Phí ngân hàng
Ngân hàng tính phí 10$/1 tháng cộng với phí sử dụng séc như sau:
− 0.1$ mỗi séc nếu số lượng không quá 20 séc
− 0.08$ mỗi séc nếu số lượng séc trong khoảng 20 đến 39
− 0.06$ mỗi séc nếu số lượng séc trong khoảng 40 đến 59
− 0.04$ mỗi séc nếu số lượng séc trong từ 60 trở lên
Mặt khác sẽ tính thêm 15$ nếu số dư trong tài khoản (trước khi trừ 2 loại phí ở trên)
dưới 400$
Viết chương trình nhập vào số dư tài khoản và số lượng séc sử dụng trong tháng sau đó
in ra các khoản phí người dùng phải trả.
Chú ý: không chấp nhận người dùng nhập số âm. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double monthly_fee = 10.0;
    const double low_balance_fee = 15.0;
    double balance;
    int num_checks;
    double check_fee = 0.0;
    double total_fee;

    // Nhập số dư tài khoản
    cout << "Nhap so du tai khoan: ";
    cin >> balance;
    while (balance < 0) {
        cout << "So du khong duoc am. Vui long nhap lai: ";
        cin >> balance;
    }

    // Nhập số lượng séc
    cout << "Nhap so luong sec su dung trong thang: ";
    cin >> num_checks;
    while (num_checks < 0) {
        cout << "So luong sec khong duoc am. Vui long nhap lai: ";
        cin >> num_checks;
    }

    // Tinh phi su dung sec
    if (num_checks <= 20) {
        check_fee = num_checks * 0.1;
    } else if (num_checks <= 39) {
        check_fee = num_checks * 0.08;
    } else if (num_checks <= 59) {
        check_fee = num_checks * 0.06;
    } else {
        check_fee = num_checks * 0.04;
    }

    // Tinh tong phi
    total_fee = monthly_fee + check_fee;
    if (balance < 400) {
        total_fee += low_balance_fee;
    }

    // In ra ket qua
    cout << fixed << setprecision(2);
    cout << "Tong phi phai tra: $" << total_fee << endl;

    return 0;
}