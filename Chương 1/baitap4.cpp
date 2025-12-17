/* 4. Viết một chương trình tính thuế và tip trên một hóa đơn nhà hàng cho vị khách quen 
với số tiền phải trả cho bữa ăn là 88.67 đô. Thuế là 6.75 phần trăm chi phí bữa ăn. 
Tiền tip là 20 phần trăm tổng tiền sau khi cộng thêm thuế. Hiển thị chi phí bữa ăn, 
số tiền thuế, số tiền tip, và tổng hóa đơn ra màn hình. */
#include <iostream>
using namespace std;
int main() {
    float ChiPhiBuaAn = 88.67;
    float ThueSuat = 0.0675; // 6.75%
    float TipSuat = 0.20; // 20%

    float SoTienThue = ChiPhiBuaAn * ThueSuat;
    float TongSauThue = ChiPhiBuaAn + SoTienThue;
    float SoTienTip = TongSauThue * TipSuat;
    float TongHoaDon = TongSauThue + SoTienTip;

    cout << "Chi phi bua an: " << ChiPhiBuaAn << " do." << endl;
    cout << "So tien thue: " << SoTienThue << " do." << endl;
    cout << "So tien tip: " << SoTienTip << " do." << endl;
    cout << "Tong hoa don: " << TongHoaDon << " do." << endl;

    return 0;
}