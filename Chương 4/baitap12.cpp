/* 12. Bảng độ C sang độ F:
Viết chương trình hiển thị bảng nhiệt độ C từ 0 - 20 và độ F tương đương. Biết công
thức chuyển đổi từ độ C sang độ F như sau:
Trong đó: F là độ F; C là độ C */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    cout << "Celsius\tFahrenheit\n";
    cout << "---------------------\n";
    for (int celsius = 0; celsius <= 20; ++celsius) {
        double fahrenheit = (9.0 / 5.0) * celsius + 32;
        cout << celsius << "\t" << fahrenheit << "\n";
    }
    return 0;
}