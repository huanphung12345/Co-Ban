/* 17. Cá nhân tốt nhất
Viết chương trình yêu cầu nhập tên vận động viên nhảy sào, ngày thi đấu, chiều cao
nhảy (được tính bằng mét) của 3 vận động viên có thành tích tốt nhất. Sau đó chương
trình sẽ hiển thị danh sách theo thứ tự thành tích đạt được.
Xác thực đầu vào: Chỉ chấp nhận các giá trị từ 2.0m đến 5.0m cho các chiều cao */
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Athlete {
    string name;
    string date;
    double height;
};
bool compareByHeight(const Athlete& a, const Athlete& b) {
    return a.height > b.height;
}
int main() {
    vector<Athlete> athletes(3);
    for (int i = 0; i < 3; ++i) {
        cout << "Nhập thông tin vận động viên thứ " << (i + 1) << ":\n";
        cout << "Tên: ";
        getline(cin, athletes[i].name);
        cout << "Ngày thi đấu (dd/mm/yyyy): ";
        getline(cin, athletes[i].date);
        do {
            cout << "Chiều cao nhảy (mét từ 2.0 đến 5.0): ";
            cin >> athletes[i].height;
            if (athletes[i].height < 2.0 || athletes[i].height > 5.0) {
                cout << "Chiều cao không hợp lệ. Vui lòng nhập lại.\n";
            }
        } while (athletes[i].height < 2.0 || athletes[i].height > 5.0);
        cin.ignore(); // Xóa ký tự newline khỏi bộ đệm
    }
    sort(athletes.begin(), athletes.end(), compareByHeight);
    cout << "\nDanh sách vận động viên theo thứ tự thành tích:\n";
    cout << left << setw(25) << "Tên" << setw(15) << "Ngày thi đấu" << setw(10) << "Chiều cao (m)" << "\n";
    for (const auto& athlete : athletes) {
        cout << left << setw(25) << athlete.name
             << setw(15) << athlete.date
             << fixed << setprecision(2) << athlete.height << "\n";
    }
    return 0;
}