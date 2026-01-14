/* 22. Điểm đông và sôi
Bảng sau liệt kê các điểm đông đặc và sôi của một số chất. Viết một chương trình yêu
cầu người dùng nhập một nhiệt độ và sau đó hiển thị các chất sẽ đông đặc ở nhiệt độ
đó và những chất sẽ sôi ở nhiệt độ đó. Ví dụ, nếu người dùng nhập -20, chương trình
sẽ báo rằng nước sẽ đóng băng và oxy sẽ sôi ở nhiệt độ đó.
Chất Nhiệt độ đông(0F) Nhiệt độ sôi (0F)
Cồn Ethyl -173 172
Thủy ngân -38 676
Oxy -362 -306
Nước 32 212 */
#include <iostream>
using namespace std;
int main() {
    const int numSubstances = 4;
    const string substances[numSubstances] = {"Cồn Ethyl", "Thủy ngân", "Oxy", "Nước"};
    const int freezingPoints[numSubstances] = {-173, -38, -362, 32};
    const int boilingPoints[numSubstances] = {172, 676, -306, 212};

    int temperature;
    cout << "Nhập nhiệt độ (0F): ";
    cin >> temperature;

    cout << "Các chất sẽ đông đặc ở nhiệt độ " << temperature << "0F:\n";
    for (int i = 0; i < numSubstances; ++i) {
        if (temperature <= freezingPoints[i]) {
            cout << "- " << substances[i] << endl;
        }
    }

    cout << "Các chất sẽ sôi ở nhiệt độ " << temperature << "0F:\n";
    for (int i = 0; i < numSubstances; ++i) {
        if (temperature >= boilingPoints[i]) {
            cout << "- " << substances[i] << endl;
        }
    }

    return 0;
}