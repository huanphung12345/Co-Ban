/* 4. Diện tích hình chữ nhật
Viết chương trình yêu cầu người dùng nhập chiều dài và rộng của 2 hình chữ nhật. sau
đó cho biết hình nào có diện tích lớn hơn, nếu bằng nhau thì thông báo bằng nhau */
#include <iostream>
using namespace std;
int main() {
    float length1, width1, length2, width2;

    cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat thu nhat: ";
    cin >> length1 >> width1;
    cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat thu hai: ";
    cin >> length2 >> width2;

    float area1 = length1 * width1;
    float area2 = length2 * width2;

    if (area1 > area2) {
        cout << "Hinh chu nhat thu nhat co dien tich lon hon: " << area1 << endl;
    } else if (area2 > area1) {
        cout << "Hinh chu nhat thu hai co dien tich lon hon: " << area2 << endl;
    } else {
        cout << "Hai hinh chu nhat co dien tich bang nhau: " << area1 << endl;
    }

    return 0;
}