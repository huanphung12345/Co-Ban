/* 25. Nhà cung cấp dịch vụ di động
Một nhà cung cấp dịch vụ điện thoại di động có ba gói đăng ký khác nhau cho khách
hàng của mình:
− Gói A: Giá $ 39,99 trên 1 tháng thì được cung cấp 450 phút. Số phút thêm là
$ 0,45 cho mỗi phút.
− Gói B: Giá $ 59,99 trên 1 tháng thì được cung cấp 900 phút. Số phút thêm là
$ 0,40 cho mỗi phút.
− Gói C: Giá $ 69,99 trên 1 tháng thì được cung cấp số phút không giới hạn.
Viết chương trình tính toán hóa đơn hàng tháng của khách hàng. Chương trình sẽ hỏi
khách hàng đã mua gói nào và đã sử dụng bao nhiêu phút. Sau đó, nó sẽ hiển thị tổng
số tiền đến hạn.
Xác thực đầu vào: Đảm bảo người dùng chỉ chọn gói A, B hoặc C */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double packageA_fee = 39.99;
    const double packageB_fee = 59.99;
    const double packageC_fee = 69.99;
    const int packageA_minutes = 450;
    const int packageB_minutes = 900;
    const double packageA_extra_rate = 0.45;
    const double packageB_extra_rate = 0.40;

    char package;
    int minutes_used;
    double total_due;

    // Input package selection with validation
    cout << "Enter your subscription package (A, B, or C): ";
    cin >> package;
    package = toupper(package);
    while (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package. Please enter A, B, or C: ";
        cin >> package;
        package = toupper(package);
    }

    // Input minutes used
    cout << "Enter the number of minutes used: ";
    cin >> minutes_used;

    // Calculate total due based on selected package
    switch (package) {
        case 'A':
            total_due = packageA_fee;
            if (minutes_used > packageA_minutes) {
                total_due += (minutes_used - packageA_minutes) * packageA_extra_rate;
            }
            break;
        case 'B':
            total_due = packageB_fee;
            if (minutes_used > packageB_minutes) {
                total_due += (minutes_used - packageB_minutes) * packageB_extra_rate;
            }
            break;
        case 'C':
            total_due = packageC_fee;
            break;
    }

    // Output the total amount due
    cout << fixed << setprecision(2);
    cout << "Total amount due: $" << total_due << endl;

    return 0;
}