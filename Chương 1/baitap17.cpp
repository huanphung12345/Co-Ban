/* 12. Tính toán mẫu đất
Một mẫu đất tương đương với 43.560 feet vuông. Viết chương trình tính toán số mẫu 
đất trên một khu đất có diện tích 391.876 feet vuông. */
#include <iostream>
using namespace std;
int main() {
    const double area_per_acre = 43560.0; // feet vuông trên một mẫu đất
    double land_area = 391876.0; // diện tích khu đất trong feet vuông
    double acres = land_area / area_per_acre; // tính số mẫu đất

    cout << "So mau dat tren khu dat co dien tich " << land_area << " feet vuong la: " << acres << " mau dat." << endl;

    return 0;
}