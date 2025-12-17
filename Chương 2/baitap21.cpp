/* 21. Bao nhiêu chiếc Pizza?
Chỉnh sửa chương trình bạn đã viết trong Programming Challenge 20 (Pizza Pi) để
báo cáo số lượng pizza bạn cần mua cho một bữa tiệc nếu mỗi người tham dự có khả
năng sẽ ăn khoảng 4 miếng cắt. Chương trình cần yêu cầu người dùng nhập vào số
lượng người tham dự bữa tiệc, và đường kích loại pizza sẽ được gọi mua. Sau đó 
tính toán và hiển thị số lượng pizza cần mua lên màn hình. */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    const double SLICE_AREA = 14.125; // Diện tích mỗi miếng cắt
    const int SLICES_PER_PERSON = 4;  // Số miếng cắt mỗi người ăn
    double diameter;
    int numberOfGuests;

    // Nhập số lượng người tham dự bữa tiệc
    cout << "Nhap so luong nguoi tham du bua tiec: ";
    cin >> numberOfGuests;

    // Nhập đường kính của chiếc pizza từ người dùng
    cout << "Nhap duong kinh cua chiec pizza (inches): ";
    cin >> diameter;

    // Tính diện tích của chiếc pizza
    double radius = diameter / 2.0;
    double pizzaArea = M_PI * pow(radius, 2);

    // Tính số lượng miếng cắt
    int numberOfSlices = static_cast<int>(pizzaArea / SLICE_AREA);

    // Tính tổng số miếng cắt cần cho bữa tiệc
    int totalSlicesNeeded = numberOfGuests * SLICES_PER_PERSON;

    // Tính số lượng pizza cần mua
    int pizzasNeeded = static_cast<int>(ceil(static_cast<double>(totalSlicesNeeded) / numberOfSlices));

    // Hiển thị số lượng pizza cần mua
    cout << "\nSo luong pizza can mua: " << pizzasNeeded << endl;

    return 0;
}