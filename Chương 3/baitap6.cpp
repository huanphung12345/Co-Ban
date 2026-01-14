/* 6. Khối lượng và Trọng lượng
Viết chương trình nhập vào cân nặng của đồ vật và in ra trọng lượng của nó. Nếu trọng
lượng đạt trên 100 thì thông báo vật quá nặng, nếu trọng lượng nhỏ hơn 10 thì thông
báo vật quá nhẹ. Biết trọng lượng của 1 vật được tính băng công thức lấy khối lượng
(kg) nhân với 9.8. */
#include <iostream>
using namespace std;
int main() {
    float weight;
    cout << "Nhap vao khoi luong (kg): ";
    cin >> weight;

    float weight_in_newtons = weight * 9.8;
    cout << "Trong luong cua vat la: " << weight_in_newtons << " N" << endl;

    if (weight_in_newtons > 100) {
        cout << "Vat qua nang." << endl;
    } else if (weight_in_newtons < 10) {
        cout << "Vat qua nhe." << endl;
    }

    return 0;
}