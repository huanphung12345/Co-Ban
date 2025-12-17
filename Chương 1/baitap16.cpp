/* 11. Quãng đường với mỗi bình xăng (Bắt buộc)
Một chiếc xe với một bình xăng 20 gallon trung bình 23.5 dặm cho mỗi gallon khi 
lái xe trong thành phố, và 28.9 dặm cho mỗi gallon khi lái xe trên đường cao tốc. 
Viết chương trình tính toán và hiển thị quãng đường ô tô đi được với một bình xăng 
khi di chuyển trên thị trấn và khi di chuyển trên đường cao tốc. */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double tank_capacity = 20.0; // gallons
    const double city_mileage = 23.5;   // miles per gallon
    const double highway_mileage = 28.9; // miles per gallon

    double city_distance = tank_capacity * city_mileage;
    double highway_distance = tank_capacity * highway_mileage;

    cout << fixed << setprecision(2);
    cout << "Quang duong di duoc tren thanh pho voi mot binh xang: " << city_distance << " miles" << endl;
    cout << "Quang duong di duoc tren duong cao toc voi mot binh xang: " << highway_distance << " miles" << endl;

    return 0;
}