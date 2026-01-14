/* 8. Gia sư Toán (Bắt buộc)
Viết chương trình hiển thị ngẫu nhiên 2 số, sau đó hiện thị thực đơn cho người dùng
lựa chọn phép toán: cộng, trừ, nhân, chia và chức năng thoát. Nếu người dùng chọn
cộng thì chương trình thực hiện tính tổng 2 số ngẫu nhiên, tương tự với các phép toán.
Sau khi người dùng hoàn thành bài toán, chương trình sẽ hiển thị lại thực đơn để người
dùng có thể lựa chọn phép toán khác. Quá trình này được lặp lại cho đến khi người
dùng chọn thoát khỏi chương trình.
Xác thực đầu vào: Nếu người dùng chọn một mục không có trong thực đơn, hiển thị
thông báo lỗi và hiển thị lại thực đơn */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo bộ sinh số ngẫu nhiên
    int num1 = rand() % 100; // Sinh số ngẫu nhiên thứ nhất từ 0 đến 99
    int num2 = rand() % 100; // Sinh số ngẫu nhiên thứ hai từ 0 đến 99
    int choice;

    do {
        cout << "Hai so ngau nhien la: " << num1 << " va " << num2 << endl;
        cout << "Chon phep toan:" << endl;
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "5. Thoat" << endl;
        cout << "Nhap lua chon cua ban (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Ket qua: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "Ket qua: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "Ket qua: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 != 0) {
                    cout << "Ket qua: " << num1 << " / " << num2 << " = " << (static_cast<double>(num1) / num2) << endl;
                } else {
                    cout << "Loi: Khong the chia cho 0!" << endl;
                }
                break;
            case 5:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Loi: Lua chon khong hop le. Vui long chon lai." << endl;
        }
        cout << endl; // Dòng trống để dễ đọc
    } while (choice != 5);

    return 0;
}