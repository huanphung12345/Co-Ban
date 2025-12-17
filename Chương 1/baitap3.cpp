/* 3. Viết một chương trình tính tổng thuế bán hàng trên một giỏ hàng 95 đô. Giả sử thuế bán 
hàng của một tiểu bang là 4 phần trăm, và thuế bán hàng của quận là 2 phần trăm */
#include <iostream>
using namespace std;
int main() {
    float TongTienHang = 95.0;
    float ThueTinhBang = 0.04; // 4%
    float ThueTinhHuyen = 0.02; // 2%
    float TongThue = TongTienHang * (ThueTinhBang + ThueTinhHuyen);
    cout << "Tong thue ban hang tren gio hang 95 do la: " << TongThue << " do." << endl;
    return 0;
}