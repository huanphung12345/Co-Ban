/* 15. Phí vận chuyển
Công ty vận tải hàng hóa nhanh thu phí sau:
Trọng lượng (Kilogram) Mức phí trên mỗi dặm
Nhỏ hơn 2kg $1.10
Từ 2kg → 6kg $2.20
Từ 6kg → 10kg $3.70
Từ 10kg → 20kg $4.80
Viết một chương trình yêu cầu trọng lượng của gói và khoảng cách để vận chuyển, sau
đó hiển thị các khoản phí.
Chú ý:
- Không chấp nhận giá trị 0 hoặc ít hơn cho trọng lượng của gói. Không chấp nhận
trọng lượng hơn 20 kg (đây là trọng lượng tối đa của công ty).
- Không chấp nhận khoảng cách dưới 10 dặm hoặc hơn 3. 000 dặm. Đây là khoảng
cách tối thiểu và tối đa của công ty. */
#include <iostream>
using namespace std;
int main()
{
    double weight, distance, fee_per_mile, total_fee;

    // Nhập trọng lượng gói hàng
    cout << "Nhap trong luong goi hang (kg): ";
    cin >> weight;

    // Kiểm tra trọng lượng hợp lệ
    if (weight <= 0 || weight > 20)
    {
        cout << "Trong luong khong hop le. Vui long nhap trong luong tu 0 den 20 kg." << endl;
        return 1;
    }

    // Nhập khoảng cách vận chuyển
    cout << "Nhap khoang cach van chuyen (dặm): ";
    cin >> distance;

    // Kiểm tra khoảng cách hợp lệ
    if (distance < 10 || distance > 3000)
    {
        cout << "Khoang cach khong hop le. Vui long nhap khoang cach tu 10 den 3000 dặm." << endl;
        return 1;
    }

    // Xác định mức phí trên mỗi dặm dựa trên trọng lượng
    if (weight < 2)
        fee_per_mile = 1.10;
    else if (weight <= 6)
        fee_per_mile = 2.20;
    else if (weight <= 10)
        fee_per_mile = 3.70;
    else // weight <= 20
        fee_per_mile = 4.80;

    // Tính tổng phí vận chuyển
    total_fee = fee_per_mile * distance;

    // Hiển thị kết quả
    cout << "Tong phi van chuyen: $" << total_fee << endl;

    return 0;
}