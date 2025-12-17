/* 8. Tổng tiền mua hàng
Một khách hàng trong một cửa hàng mua 5 món đồ. Giá của các món đồ như sau:
− Giá của món đồ thứ nhất = 15.59 đô la
− Giá của món đồ thứ hai = 24.59 đô la
− Giá của món đồ thứ ba = 6.59 đô la
− Giá của món đồ thứ tư = 12.59 đô la
− Giá của món đồ thứ năm = 3.59 đô la
Viết một chương trình lưu giữ giá của năm món đồ này trong năm biến. Hiển thị giá 
của mỗi món đồ, tổng tạm tính của giỏ hàng, số tiền thuế, và tổng phải trả. Giả sử
thuế bán hàng là 7 phần trăm. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Giá của các món đồ
    const double item1Price = 15.59;
    const double item2Price = 24.59;
    const double item3Price = 6.59;
    const double item4Price = 12.59;
    const double item5Price = 3.59;

    // Tính tổng tạm tính
    double subtotal = item1Price + item2Price + item3Price + item4Price + item5Price;

    // Tính số tiền thuế (7%)
    const double taxRate = 0.07;
    double taxAmount = subtotal * taxRate;

    // Tính tổng phải trả
    double totalAmount = subtotal + taxAmount;

    // Hiển thị kết quả
    cout << fixed << setprecision(2); // Định dạng số thập phân với 2 chữ số
    cout << "Gia cua mon do thu nhat: $" << item1Price << endl;
    cout << "Gia cua mon do thu hai: $" << item2Price << endl;
    cout << "Gia cua mon do thu ba: $" << item3Price << endl;
    cout << "Gia cua mon do thu tu: $" << item4Price << endl;
    cout << "Gia cua mon do thu nam: $" << item5Price << endl;
    cout << "Tong tam tinh cua gio hang: $" << subtotal << endl;
    cout << "So tien thue: $" << taxAmount << endl;
    cout << "Tong phai tra: $" << totalAmount << endl;

    return 0;
}