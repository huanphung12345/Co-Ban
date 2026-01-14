/* 2. Thống kê lượng mưa (Bắt buộc)
Viết một chương trình cho phép người dùng nhập lượng mưa của mỗi tháng trong 12
tháng vào một mảng số double. Chương trình sẽ hiển thị tổng lượng mưa trong năm,
lượng mưa trung bình hàng tháng và các tháng có lượng mưa cao nhất và thấp nhất.
Xác thực đầu vào: Không chấp nhận số âm cho số liệu lượng mưa hàng tháng. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int MONTHS = 12;
    double rainfall[MONTHS];
    double totalRainfall = 0.0;
    double maxRainfall, minRainfall;
    int maxMonth = 0, minMonth = 0;

    // Nhập lượng mưa cho mỗi tháng
    cout << "Nhap luong mua cho moi thang trong nam:" << endl;
    for (int i = 0; i < MONTHS; i++) {
        double input;
        do {
            cout << "Thang " << (i + 1) << ": ";
            cin >> input;
            if (input < 0) {
                cout << "Luong mua khong duoc am. Vui long nhap lai." << endl;
            }
        } while (input < 0);
        rainfall[i] = input;
        totalRainfall += input;
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất
    maxRainfall = rainfall[0];
    minRainfall = rainfall[0];

    // Tìm lượng mưa cao nhất và thấp nhất
    for (int i = 1; i < MONTHS; i++) {
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = i;
        }
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = i;
        }
    }

    // Tính lượng mưa trung bình hàng tháng
    double averageRainfall = totalRainfall / MONTHS;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Tong luong mua trong nam: " << totalRainfall << " don vi." << endl;
    cout << "Luong mua trung binh hang thang: " << averageRainfall << " don vi." << endl;
    cout << "Thang co luong mua cao nhat: Thang " << (maxMonth + 1) << " voi " << maxRainfall << " don vi." << endl;
    cout << "Thang co luong mua thap nhat: Thang " << (minMonth + 1) << " voi " << minRainfall << " don vi." << endl;

    return 0;
}