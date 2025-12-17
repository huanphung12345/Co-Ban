/* 18. Tiêu thụ nước tăng lực
Một công ty nước ngọt gần đây đã khảo sát 16,500 khách hàng của mình và thấy 
rằng khoảng 15% trong số những người được khảo sát mua một hoặc nhiều nước 
tăng lực mỗi tuần. Trong số những khách mua nước tăng lực, có khoảng 58% trong 
số họ thích nước tăng lực có vị cam. Viết chương trình hiển thị như sau:
Số lượng khác hàng gần đúng trong cuộc khảo sát mua một hoặc nhiều nước tăng 
lực trong mỗi tuần.
Số lượng khách hàng gần đúng trong cuộc khảo sát thích nước tăng lực có vị cam. */
#include <iostream>
using namespace std;
int main() {
    const int totalCustomers = 16500;
    const double percentageBuyEnergyDrink = 0.15;
    const double percentagePreferOrangeFlavor = 0.58;

    int customersBuyingEnergyDrink = static_cast<int>(totalCustomers * percentageBuyEnergyDrink);
    int customersPreferringOrangeFlavor = static_cast<int>(customersBuyingEnergyDrink * percentagePreferOrangeFlavor);

    cout << "So luong khach hang gan dung mua mot hoac nhieu nuoc tang luc moi tuan: "
         << customersBuyingEnergyDrink << endl;
    cout << "So luong khach hang gan dung thich nuoc tang luc co vi cam: "
         << customersPreferringOrangeFlavor << endl;

    return 0;
}