/* 3. Mức độ của đại dương:
Giả sử mực nước biển hiện đang tăng khoảng 1,5 milimet mỗi năm, hãy viết một
chương trình hiển thị bảng hiển thị số milimet mà đại dương sẽ tăng lên mỗi năm trong
25 năm tới. */
#include <iostream>
using namespace std;
int main() {
    const double RISE_PER_YEAR = 1.5; // milimet
    const int YEARS = 25;

    cout << "Nam\tMuc nuoc bien tang (mm)" << endl;
    for (int year = 1; year <= YEARS; ++year) {
        double rise = year * RISE_PER_YEAR;
        cout << year << "\t" << rise << endl;
    }

    return 0;
}