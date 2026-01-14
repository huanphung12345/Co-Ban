/* 21. Cải tiến thêm ở bài 20:
Nâng cao chương trình mà bạn đã viết cho bài 20 để nó lưu giữ số lần người dùng đoán.
Khi người dùng đoán đúng số ngẫu nhiên, chương trình sẽ hiển thị số người đoán. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0))); // Khởi tạo bộ sinh số ngẫu nhiên
    int soCanDoan = rand() % 100 + 1; // Sinh số ngẫu nhiên từ 1 đến 100
    int soLanDoan = 0; // Biến đếm số lần đoán
    int soNguoiDung;

    cout << "Chuong trinh doan so tu 1 den 100." << endl;

    do {
        cout << "Nhap so ban doan: ";
        cin >> soNguoiDung;
        soLanDoan++; // Tăng biến đếm mỗi khi người dùng đoán

        if (soNguoiDung < soCanDoan) {
            cout << "So ban doan nho hon so can doan. Thu lai!" << endl;
        } else if (soNguoiDung > soCanDoan) {
            cout << "So ban doan lon hon so can doan. Thu lai!" << endl;
        } else {
            cout << "Chuc mung! Ban da doan dung so " << soCanDoan << "!" << endl;
            cout << "So lan ban da doan: " << soLanDoan << endl; // Hiển thị số lần đoán
        }
    } while (soNguoiDung != soCanDoan);

    return 0;
}