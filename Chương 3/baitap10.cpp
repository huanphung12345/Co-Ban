/* 10. Số ngày của 1 tháng (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập tháng và năm, cho biết tháng đó có bao
nhiêu ngày. Sử dụng tiêu chí sau để xác định năm nhuận:
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 3
- Xác định xem năm có chia hết cho 100 hay không. Nếu đó là một năm nhuận nếu
và chỉ nếu năm đó chia hết cho 400. Ví dụ, 2000 là năm nhuận nhưng 2100 không
phải năm nhuận.
- Nếu năm không chia hết cho 100 thì đó là năm nhuận nếu và chỉ nếu năm đó chia
hết 4. Ví dụ, năm 2008 là năm nhuận nhưng năm 2009 không phải năm nhuận.
Dưới đây và ví dụ chương trình trình chạy:
Nhập vào 1 tháng (1-12): 2 [Enter]
Nhập vào 1 năm: 2008 [Enter]
Số ngày: 29 */
#include <iostream>
using namespace std;
int main() {
    int month, year;
    cout << "Nhap vao 1 thang (1-12): ";
    cin >> month;
    cout << "Nhap vao 1 nam: ";
    cin >> year;

    int days;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            cout << "Thang khong hop le!" << endl;
            return 1;
    }

    cout << "So ngay: " << days << endl;
    return 0;
}