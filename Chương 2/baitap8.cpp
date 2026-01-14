<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> c756219c1565723911bb78e1f985d607c20fcf0b
/* 8. Có bao nhiêu vật dụng?
Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. Viết chương 
trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên 
tổng trọng lượng của pallet. Chương trình sẽ hỏi người dùng xem pallet nặng bao 
nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau. Sau đó, 
nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet. */
#include <iostream>
using namespace std;
int main() {
    const double TRONG_LUONG_VAT_DUNG = 12.5; // trọng lượng mỗi vật dụng (pound)

    double trongLuongPallet;
    double trongLuongTong;

    // Nhập trọng lượng của pallet và tổng trọng lượng
    cout << "Nhap trong luong pallet (pound): ";
    cin >> trongLuongPallet;
    cout << "Nhap trong luong tong (pound): ";
    cin >> trongLuongTong;

    // Tính trọng lượng của các vật dụng trên pallet
    double trongLuongVatDung = trongLuongTong - trongLuongPallet;

    // Tính số lượng vật dụng
    int soLuongVatDung = static_cast<int>(trongLuongVatDung / TRONG_LUONG_VAT_DUNG);

    // Hiển thị kết quả
    cout << "So luong vat dung tren pallet: " << soLuongVatDung << endl;

    return 0;
<<<<<<< HEAD
=======
/* 8. Có bao nhiêu vật dụng?
Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. Viết chương 
trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên 
tổng trọng lượng của pallet. Chương trình sẽ hỏi người dùng xem pallet nặng bao 
nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau. Sau đó, 
nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet. */
#include <iostream>
using namespace std;
int main() {
    const double TRONG_LUONG_VAT_DUNG = 12.5; // trọng lượng mỗi vật dụng (pound)

    double trongLuongPallet;
    double trongLuongTong;

    // Nhập trọng lượng của pallet và tổng trọng lượng
    cout << "Nhap trong luong pallet (pound): ";
    cin >> trongLuongPallet;
    cout << "Nhap trong luong tong (pound): ";
    cin >> trongLuongTong;

    // Tính trọng lượng của các vật dụng trên pallet
    double trongLuongVatDung = trongLuongTong - trongLuongPallet;

    // Tính số lượng vật dụng
    int soLuongVatDung = static_cast<int>(trongLuongVatDung / TRONG_LUONG_VAT_DUNG);

    // Hiển thị kết quả
    cout << "So luong vat dung tren pallet: " << soLuongVatDung << endl;

    return 0;
>>>>>>> 7adce39745e50cd0ce317b8fbe23c3a84f56fd36
=======
>>>>>>> c756219c1565723911bb78e1f985d607c20fcf0b
}