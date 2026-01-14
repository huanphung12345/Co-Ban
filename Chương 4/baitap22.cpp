/* 22. Màn hình vuông
Viết chương trình yêu cầu người dùng nhập một số nguyên dương không lớn hơn 15.
Sau đó, chương trình sẽ hiển thị một hình vuông trên màn hình bằng ký tự ‘X’. Số người
dùng nhập vào sẽ là độ dài của mỗi cạnh của hình vuông.
Ví dụ, nếu người dùng nhập 5, chương trình sẽ hiển thị như sau:
XXXXX
XXXXX
XXXXX
XXXXX
XXXXX
Nếu người dùng nhập 8, chương trình sẽ hiển thị như sau:
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen duong khong lon hon 15: ";
    cin >> n;

    if (n <= 0 || n > 15) {
        cout << "So nhap vao khong hop le!" << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << 'X';
        }
        cout << endl;
    }

    return 0;
}