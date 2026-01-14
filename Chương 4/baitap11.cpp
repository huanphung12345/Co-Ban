/* 11. Quần thể
Viết chương trình dự đoán số lượng sinh vật trong một quần thể. Chương trình phải hỏi
người dùng về số lượng sinh vật ban đầu, mức tăng trung bình hàng ngày của quần thể
(theo phần trăm) và số ngày chúng sẽ nhân lên. Một vòng lặp sẽ hiển thị số lượng sinh
vật cho mỗi ngày.
Xác thực đầu vào:
− Không chấp nhận số lượng ban đầu một số nhỏ hơn 2.
− Không chấp nhận mức tăng trung bình âm.
− Không chấp nhận số ngày chúng sẽ nhân lên nhỏ hơn 1 */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int initial_population;
    double daily_increase_percent;
    int days;

    // Nhập số lượng sinh vật ban đầu
    do {
        cout << "Nhap so luong sinh vat ban dau (>= 2): ";
        cin >> initial_population;
    } while (initial_population < 2);

    // Nhập mức tăng trung bình hàng ngày
    do {
        cout << "Nhap muc tang trung binh hang ngay (>= 0): ";
        cin >> daily_increase_percent;
    } while (daily_increase_percent < 0);

    // Nhập số ngày quần thể sẽ nhân lên
    do {
        cout << "Nhap so ngay chung se nhan len (>= 1): ";
        cin >> days;
    } while (days < 1);

    cout << fixed << setprecision(2);
    cout << "\nNgay\tSo luong sinh vat\n";
    cout << "-------------------------\n";

    double current_population = initial_population;
    for (int day = 1; day <= days; ++day) {
        cout << day << "\t" << current_population << "\n";
        current_population += current_population * (daily_increase_percent / 100.0);
    }

    return 0;
}