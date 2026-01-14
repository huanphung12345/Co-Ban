/* 7. Đồng để thanh toán
Viết một chương trình tính toán số tiền một người sẽ kiếm được trong một khoảng thời
gian nếu tiền lương của họ là một xu vào ngày đầu tiên và hai xu vào ngày thứ hai, và
tiếp tục tăng gấp đôi mỗi ngày. Chương trình sẽ hỏi người dùng về số ngày. Hiển thị
bảng hiển thị số tiền lương cho mỗi ngày, sau đó hiển thị tổng tiền lương vào cuối kỳ.
Đầu ra phải được hiển thị bằng số đô la, không phải số xu.
Xác thực đầu vào:: Không chấp nhận số ngày nhỏ hơn 1 cho số ngày làm việc và 100
xu = 1 đô la. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int days;

    // Nhập số ngày với xác thực đầu vào
    do {
        cout << "Nhap so ngay lam viec: ";
        cin >> days;
        if (days < 1) {
            cout << "Vui long nhap so ngay lon hon hoac bang 1." << endl;
        }
    } while (days < 1);

    // Hiển thị tiêu đề bảng
    cout << "\nNgay" << setw(20) << "Luong (USD)" << endl;
    cout << "----------------------------------------" << endl;

    double totalSalary = 0.0;
    double dailySalary = 0.01; // Lương ngày đầu tiên là 1 xu

    // Tính và hiển thị lương cho mỗi ngày
    for (int i = 1; i <= days; ++i) {
        cout << setw(3) << i << setw(20) << fixed << setprecision(2) << dailySalary / 100 << endl;
        totalSalary += dailySalary;
        dailySalary *= 2; // Lương tăng gấp đôi mỗi ngày
    }

    // Hiển thị tổng lương
    cout << "----------------------------------------" << endl;
    cout << "Tong luong trong " << days << " ngay: " << fixed << setprecision(2) << totalSalary / 100 << " USD" << endl;

    return 0;
}