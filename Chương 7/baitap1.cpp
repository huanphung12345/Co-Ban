/* 1. Tính phí xác thực tài khoản (Bắt buộc)
Viết chương trình cho phép người dùng nhập số tài khoản tính phí. Chương trình sẽ xác 
định xem số có hợp lệ hay không bằng cách kiểm tra nó trong danh sách sau:
5658845 4520125 7895122 8777541 8451277 1302850
8080152 4562555 5552012 5050552 7825877 1250255
1005231 6545231 3852085 7576651 7881200 4581002
Danh sách các số ở trên phải được khởi tạo trong một mảng một chiều. Sử dụng tìm 
kiếm tuyến tính (tuần tự) để xác định số tài khoản do người dùng nhập. Nếu người dùng 
nhập một số trong mảng, chương trình sẽ hiển thị thông báo cho biết số đó hợp lệ. Nếu 
người dùng nhập một số không có trong mảng, chương trình sẽ hiển thị thông báo cho 
biết số đó không hợp lệ */
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 18;
    int validAccounts[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                               8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                               1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    int userAccount;
    cout << "Nhap so tai khoan can xac thuc: ";
    cin >> userAccount;

    bool isValid = false;
    for (int i = 0; i < SIZE; ++i) {
        if (validAccounts[i] == userAccount) {
            isValid = true;
            break;
        }
    }

    if (isValid) {
        cout << "So tai khoan hop le." << endl;
    } else {
        cout << "So tai khoan khong hop le." << endl;
    }

    return 0;
}