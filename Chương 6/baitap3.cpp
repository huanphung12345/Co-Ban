/* 3. Khoai tây chiên và Salsa (Bắt buộc)
Viết một chương trình cho phép nhà sản xuất khoai tây chiên và salsa theo dõi doanh số
của năm loại salsa khác nhau: nhẹ, vừa, ngọt, nóng và vị chanh. Chương trình nên sử
dụng cùng lúc hai mảng 5 phần tử: một mảng chuỗi chứa tên năm loại salsa và một mảng
số nguyên chứa số lọ đã bán tháng qua cho mỗi loại salsa. Tên các loại salsa nên được
lưu trữ bằng cách khởi tạo danh sách tại thời điểm tạo mảng tên. Chương trình yêu cầu
người dùng nhập số lượng lọ được bán cho từng loại. Khi dữ liệu bán hàng này đã được
nhập, chương trình sẽ tạo ra một báo cáo hiển thị doanh số bán hàng cho từng loại salsa,
tổng doanh số bán hàng và tên của các sản phẩm bán chạy nhất và bán chậm nhất.
Xác thực đầu vào: Không chấp nhận giá trị âm cho số lượng lọ đã bán. */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    const int TYPES = 5;
    string salsaNames[TYPES] = {"Nhe", "Vua", "Ngot", "Nong", "Vi Chanh"};
    int salsaSales[TYPES];
    int totalSales = 0;
    int maxSales, minSales;
    int maxIndex = 0, minIndex = 0;

    // Nhập số lượng lọ đã bán cho từng loại salsa
    cout << "Nhap so luong lo da ban cho tung loai salsa:" << endl;
    for (int i = 0; i < TYPES; i++) {
        int input;
        do {
            cout << salsaNames[i] << ": ";
            cin >> input;
            if (input < 0) {
                cout << "So luong lo da ban khong duoc am. Vui long nhap lai." << endl;
            }
        } while (input < 0);
        salsaSales[i] = input;
        totalSales += input;
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất
    maxSales = salsaSales[0];
    minSales = salsaSales[0];

    // Tìm sản phẩm bán chạy nhất và bán chậm nhất
    for (int i = 1; i < TYPES; i++) {
        if (salsaSales[i] > maxSales) {
            maxSales = salsaSales[i];
            maxIndex = i;
        }
        if (salsaSales[i] < minSales) {
            minSales = salsaSales[i];
            minIndex = i;
        }
    }

    // Hiển thị báo cáo doanh số bán hàng
    cout << fixed << setprecision(0);
    cout << "\nBao cao doanh so ban hang:" << endl;
    for (int i = 0; i < TYPES; i++) {
        cout << salsaNames[i] << ": " << salsaSales[i] << " lo" << endl;
    }
    cout << "Tong doanh so ban hang: " << totalSales << " lo" << endl;
    cout << "San pham ban chay nhat: " << salsaNames[maxIndex] << " voi " << maxSales << " lo." << endl;
    cout << "San pham ban cham nhat: " << salsaNames[minIndex] << " voi " << minSales << " lo." << endl;
    return 0;
}