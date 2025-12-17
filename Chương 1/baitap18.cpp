/* 13. Giá một bo mạch
Một công ty điện tử bán một bo mạch với lợi nhuận là 35 phần trăm. Viết chương 
trình tính toán giá bán của một bo mạch có chi phí là 14.95 đô la. Hiện kết quả lên 
màn hình. */
#include <iostream>
using namespace std;
int main() {
    const double cost_price = 14.95; // chi phí bo mạch
    const double profit_margin = 0.35; // lợi nhuận 35 phần trăm

    double selling_price = cost_price + (cost_price * profit_margin); // tính giá bán

    cout << "Gia ban cua bo mach la: $" << selling_price << endl;

    return 0;
}