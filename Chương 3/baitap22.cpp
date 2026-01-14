/* 23. Tính hình học (Bắt buộc)
Viết chương trình hiển thị 1 thực đơn với các chức năng sau:
1. Tính diện tích hình tròn
2. Tính diện tích hình chữ nhật
3. Tính diện tích hình tam giác vuông
4. Thoát
Nhập lựa chọn [1-4] :
Yêu cầu chọn các chức năng từ 1 đến 4. Sau đó tùy lựa chọn của người dùng để thực
hiện đúng chức năng. Biết :
− Diện tích hình tròn là r2
− Diện tích hình chữ nhật là dài x rộng.
− Diện tích tam giác vuông (biết độ dài 2 cạnh góc vuông a, b) là 0.5 x ab */
#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;
int main() {
    int choice;
    do {
        cout << "----- MENU -----" << endl;
        cout << "1. Tinh dien tich hinh tron" << endl;
        cout << "2. Tinh dien tich hinh chu nhat" << endl;
        cout << "3. Tinh dien tich hinh tam giac vuong" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon [1-4]: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float radius;
                cout << "Nhap ban kinh hinh tron: ";
                cin >> radius;
                float area = PI * radius * radius;
                cout << "Dien tich hinh tron: " << area << endl;
                break;
            }
            case 2: {
                float length, width;
                cout << "Nhap chieu dai hinh chu nhat: ";
                cin >> length;
                cout << "Nhap chieu rong hinh chu nhat: ";
                cin >> width;
                float area = length * width;
                cout << "Dien tich hinh chu nhat: " << area << endl;
                break;
            }
            case 3: {
                float a, b;
                cout << "Nhap do dai canh goc vuong a: ";
                cin >> a;
                cout << "Nhap do dai canh goc vuong b: ";
                cin >> b;
                float area = 0.5 * a * b;
                cout << "Dien tich hinh tam giac vuong: " << area << endl;
                break;
            }
            case 4:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
        cout << endl; // In dong moi sau moi lan thuc hien chuc nang
    } while (choice != 4);

    return 0;
}