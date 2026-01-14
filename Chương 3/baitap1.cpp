/* 1. Tìm Max/Min (Bắt buộc)
Viết chương trình yêu cầu người dùng nhập vào hai số, sử dụng toán tử điều kiện (toán
tử ? :) để in ra số lớn hơn và số nhỏ hơn trong 2 số. */
#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Nhap vao hai so: ";
    cin >> a >> b;

    float max = (a > b) ? a : b;
    float min = (a < b) ? a : b;

    cout << "So lon hon: " << max << endl;
    cout << "So nho hon: " << min << endl;

    return 0;
}