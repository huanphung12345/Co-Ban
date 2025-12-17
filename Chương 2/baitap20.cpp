/* 20. Pizza Pi
Tiệm Pizza của Joe đang cần một chương trình tính toán số lượng miếng cắt của một 
chiếc pizza có kích cỡ bất kỳ. Chương trình thực hiện các bước như sau:
A. Yêu cầu người dùng nhập vào đường kính của chiếc pizza (đơn vị là inches).
B. Tính toán số lượng miếng cắt có thể chia ra từ chiếc pizza với kích cỡ đó.
C. Hiển thị một thông báo rằng số lượng miếng cắt nên được thực hiện.
Để tính toán được số lượng miếng cắt hợp lý, bạn cần biết một số thông tin sau:
− Mỗi miếng cắt cần phải có diện tích 14.125 inches.
− Để tính toán số lượng miếng cắt, đơn giản ta chia diện tích của chiếc pizza 
cho 14.125.
− Diện tích của chiếc pizza được tính theo công thức: */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    const double SLICE_AREA = 14.125; // Diện tích mỗi miếng cắt
    double diameter;

    // A. Nhập đường kính của chiếc pizza từ người dùng
    cout << "Nhap duong kinh cua chiec pizza (inches): ";
    cin >> diameter;

    // B. Tính diện tích của chiếc pizza
    double radius = diameter / 2.0;
    double pizzaArea = M_PI * pow(radius, 2);

    // Tính số lượng miếng cắt
    int numberOfSlices = static_cast<int>(pizzaArea / SLICE_AREA);

    // C. Hiển thị số lượng miếng cắt nên được thực hiện
    cout << "\nSo luong mieng cat nen duoc thuc hien: " << numberOfSlices << endl;

    return 0;
}