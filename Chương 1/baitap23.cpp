/* 20. Bao nhiêu sơn
Một nhãn hiệu sơn quảng cáo rằng sơn của họ có thể phủ được 340 feet vuông trên 
mỗi gallon. Viết chương trình xác định và báo cáo xấp xỉ số lượng gallon sơn cần 
thiết để sơn cho hai lớp áo trên hàng rào bằng gỗ cao 6 feet và dài 100 feet. */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double COVERAGE_PER_GALLON = 340.0; // feet vuông trên mỗi gallon
    const double FENCE_HEIGHT = 6.0; // feet
    const double FENCE_LENGTH = 100.0; // feet
    const int COATS = 2; // số lớp sơn

    // Tính diện tích hàng rào
    double area = FENCE_HEIGHT * FENCE_LENGTH * COATS;

    // Tính số gallon sơn cần thiết
    double gallonsNeeded = area / COVERAGE_PER_GALLON;

    // Làm tròn lên số gallon vì không thể mua một phần của gallon
    int gallonsToBuy = static_cast<int>(ceil(gallonsNeeded));

    cout << "So gallon son can thiet de son hang rao: " << gallonsToBuy << " gallon" << endl;

    return 0;
}