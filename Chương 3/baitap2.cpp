/* 2. Chuyển đổi số La Mã
Viết chương trình yêu cầu người dùng nhập vào một số tự nhiên trong khoảng từ 1 đến
10, sử dụng câu lệnh switch để in ra dạng số La Mã tương ứng của số đó.
Chú ý: kiểm tra đầu vào, không chấp nhận các số nhỏ hơn 1 hoặc lớn hơn 10. */
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Nhap vao mot so tu nhien (1-10): ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "So La Ma: I" << endl;
            break;
        case 2:
            cout << "So La Ma: II" << endl;
            break;
        case 3:
            cout << "So La Ma: III" << endl;
            break;
        case 4:
            cout << "So La Ma: IV" << endl;
            break;
        case 5:
            cout << "So La Ma: V" << endl;
            break;
        case 6:
            cout << "So La Ma: VI" << endl;
            break;
        case 7:
            cout << "So La Ma: VII" << endl;
            break;
        case 8:
            cout << "So La Ma: VIII" << endl;
            break;
        case 9:
            cout << "So La Ma: IX" << endl;
            break;
        case 10:
            cout << "So La Ma: X" << endl;
            break;
        default:
            cout << "Loi: Vui long nhap so trong khoang tu 1 den 10." << endl;
            break;
    }

    return 0;
}