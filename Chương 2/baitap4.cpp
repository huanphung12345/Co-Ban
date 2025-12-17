/* 4. Lượng mưa trung bình
Viết một chương trình tính toán lượng mưa trung bình trong 3 tháng. Chương trình 
yêu cầu người dùng nhập vào tên của mỗi tháng, như là June, July; và lượng mưa 
(đơn vị đo là inches) của mỗi tháng. Sau đó chương trình hiển thị ra thông báo tương 
tự như sau:
“Lượng mưa trung bình của tháng June, July, và August là 6.72 inches.”. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int NUM_MONTHS = 3;
    string month_names[NUM_MONTHS];
    double rainfall_amounts[NUM_MONTHS];
    double total_rainfall = 0.0;
    double average_rainfall;

    // Yêu cầu người dùng nhập tên tháng và lượng mưa cho mỗi tháng
    for (int i = 0; i < NUM_MONTHS; ++i) {
        cout << "Nhap ten thang thu " << (i + 1) << ": ";
        cin >> month_names[i];
        cout << "Nhap luong mua (inches) cua thang " << month_names[i] << ": ";
        cin >> rainfall_amounts[i];
        total_rainfall += rainfall_amounts[i];
    }

    // Tính lượng mưa trung bình
    average_rainfall = total_rainfall / NUM_MONTHS;

    // Hiển thị kết quả với định dạng fixed-point, 2 chữ số thập phân
    cout << fixed << setprecision(2);
    cout << "Luong mua trung binh cua thang " 
         << month_names[0] << ", " 
         << month_names[1] << ", va " 
         << month_names[2] 
         << " la " << average_rainfall << " inches." << endl;

    return 0;
}