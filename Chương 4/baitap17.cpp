/* 17. Biểu đồ thanh toán bán hàng (Bắt buộc)
Viết một chương trình yêu cầu người dùng nhập doanh số bán hàng của ngày hôm nay
của 5 cửa hàng. Sau đó, chương trình sẽ hiển thị biểu đồ dạng thanh so sánh doanh số
bán hàng của từng cửa hàng. Tạo mỗi thanh trong biểu đồ thể hiện doanh số bán hàng
của một của hàng. Mỗi dấu hoa thị “*” tương đương với 100 đô la doanh thu.
Dưới đây là một ví dụ về đầu ra của chương trình:
Nhập vào doanh số bán hàng của cửa hàng thứ 1: 1000 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 2: 1200 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 3: 1800 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 4: 800 Enter
Nhập vào doanh số bán hàng của cửa hàng thứ 5: 1900 Enter
SALES BAR CHART
(Each * = $100)
Cửa hàng 1: **********
Cửa hàng 2: ************
Cửa hàng 3: ******************
Cửa hàng 4: ********
Cửa hàng 5: ****************** */
#include <iostream>
using namespace std;
int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Nhập doanh số bán hàng cho mỗi cửa hàng
    for (int i = 0; i < NUM_STORES; ++i) {
        cout << "Nhap vao doanh so ban hang cua cua hang thu " << (i + 1) << ": ";
        cin >> sales[i];
    }

    // Hiển thị biểu đồ thanh toán bán hàng
    cout << "\nSALES BAR CHART\n";
    cout << "(Each * = $100)\n";

    for (int i = 0; i < NUM_STORES; ++i) {
        cout << "Cua hang " << (i + 1) << ": ";
        int num_stars = sales[i] / 100;
        for (int j = 0; j < num_stars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}